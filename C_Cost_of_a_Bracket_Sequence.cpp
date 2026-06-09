#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<vector<vector<int>>>dp(n+1);
        for(int i=0;i<=n;i++){
            int max_j = min(i, k);
            int max_d = min(i, n);
            if(i == n) {
                max_j = k;
                max_d = n;
            }
            dp[i].assign(max_j + 1, vector<int>(max_d + 1, -1));
        }
        dp[0][0][0]=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            for(int j=0;j<=dp[i].size()-1;j++){
                for(int d=0;d<dp[i][j].size();d++){
                    int val=dp[i][j][d];
                    if(val==-1)continue;
                    if(j+1<=k){
                        if(d < dp[i+1][j+1].size()) {
                            dp[i+1][j+1][d]=max(dp[i+1][j+1][d],val);
                        }
                    }
                    if(c=='('){
                        if(d+1<=n && d+1 < dp[i+1][j].size()){
                            dp[i+1][j][d+1]=max(dp[i+1][j][d+1],val);
                        }
                    }else{
                        if(d>0){
                            if(d-1 < dp[i+1][j].size()) {
                                dp[i+1][j][d-1]=max(dp[i+1][j][d-1],val);
                            }
                        }else{
                            if(0 < dp[i+1][j].size()) {
                                dp[i+1][j][0]=max(dp[i+1][j][0],val+1);
                            }
                        }
                    }
                }
            }
        }
        int best_cost=1e18;
        int best_j=0,best_d=0;
        for(int j=0;j<=k;j++){
            for(int d=0;d<=n;d++){
                if(j >= dp[n].size() || d >= dp[n][j].size()) continue;
                int val=dp[n][j][d];
                if(val==-1)continue;
                int rem=n-j;
                int unma=val+d;
                int curr_cost=rem-unma;
                if(curr_cost<best_cost){
                    best_cost=curr_cost;
                    best_j=j;
                    best_d=d;
                }
            }
        }
        string ans(n,'0');
        int j=best_j,d=best_d;
        for(int i=n-1;i>=0;i--){
            if(j >= dp[i+1].size() || d >= dp[i+1][j].size()) continue;
            int curr_val=dp[i+1][j][d];
            char c=s[i];
            bool ok=false;
            if(c=='('){
                if(d>=1 && j < dp[i].size() && d-1 < dp[i][j].size() && dp[i][j][d-1]!=-1&&dp[i][j][d-1]==curr_val){
                    d=d-1;
                    ok=true;
                }
            }else{
                if(d+1<=n && j < dp[i].size() && d+1 < dp[i][j].size() && dp[i][j][d+1]!=-1&&dp[i][j][d+1]==curr_val){
                    d=d+1;
                    ok=true;
                }
                if(!ok&&d==0 && j < dp[i].size() && 0 < dp[i][j].size() && dp[i][j][0]!=-1&&dp[i][j][0]+1==curr_val){
                    ok=true;
                }
            }
            if(!ok){
                ans[i]='1';
                j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}