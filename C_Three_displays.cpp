#include <bits/stdc++.h>
using namespace std;
#define int long long
// vector<vector<vector<int>>>dp;
// int f(vector<int>&a,vector<int>&b,int prev,int wt,int idx){
//     if(wt==0)return 0;
//     if(idx>=a.size()){
//         return 1e18;
//     }
//     if(dp[idx][prev+1][wt]!=-1)return dp[idx][prev+1][wt];
//     int nottake=f(a,b,prev,wt,idx+1);
//     int take=1e18;
//     if(prev==-1||a[idx]>a[prev]){
//         take=b[idx]+f(a,b,idx,wt-1,idx+1);
//     }
//     return dp[idx][prev+1][wt]=min(take,nottake);
// }
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        // dp.assign(n,vector<vector<int>>(n+1,vector<int>(4,-1)));
        // int ans=f(a,b,-1,3,0);
        // if(ans==1e18){
        //     cout<<-1<<endl;
        // }else{
        //     cout<<ans<<endl;
        // }
        int ans=1e18;
        for(int i=0;i<n;i++){
            int temp1=1e18,temp2=1e18;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    temp1=min(temp1,b[j]);
                }
            }
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){
                    temp2=min(temp2,b[j]);
                }
            }
            ans=min(temp1+temp2+b[i],ans);
        }
        if(ans==1e18){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}