#include<bits/stdc++.h>
using namespace std;
#define int long long
int MOD = 1e9+7;
signed main(){
    int t,k;
    cin>>t>>k;
    vector<int>dp(1e5+1,0);
    dp[0]=1;
    for(int i=1;i<=1e5;i++){
        dp[i]=dp[i-1];
        if(i>=k){
            dp[i]=(dp[i]+dp[i-k])%MOD;
        }
    }
    vector<int>help(1e5+1,0);
    help[0]=dp[0];
    for(int i=1;i<=1e5;i++){
        help[i]=(help[i-1]+dp[i])%MOD;
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(help[b]-help[a-1]+MOD)%MOD<<endl;
    }
    return 0;
}