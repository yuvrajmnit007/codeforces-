#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
vector<vector<int>>dp(2001,vector<int>(2001,-1));
int f(int k,int prev,int n){
    if(k==1){
        return 1;
    }
    if(dp[k][prev]!=-1)return dp[k][prev];
    int take=0;
    for(int i=prev;i<=n;i+=prev){
        take=(take+f(k-1,i,n))%MOD;
    }
    return dp[k][prev]=take;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=(ans+f(k,i,n))%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}