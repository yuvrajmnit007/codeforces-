#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>dp(32768,-1);
    queue<int>q;
    dp[0]=0;
    q.push(0);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        int prev1=(curr-1+32768)%32768;
        if(dp[prev1]==-1){
            dp[prev1]=dp[curr]+1;
            q.push(prev1);
        }
        if(curr%2==0){
            int prev2_a=curr/2;
            int prev2_b=(curr+32768)/2;
            if(dp[prev2_a]==-1){
                dp[prev2_a]=dp[curr]+1;
                q.push(prev2_a);
            }
            if(dp[prev2_b]==-1){
                dp[prev2_b]=dp[curr]+1;
                q.push(prev2_b);
            }
        }
    }
    int t=1;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            cout<<dp[a]<<" ";
        }
        cout<<endl;
    }
    return 0;
}