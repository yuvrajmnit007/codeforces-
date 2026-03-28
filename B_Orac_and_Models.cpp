#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        vector<int>dp(n+1,1);
        for(int i=1;i<=n;i++){
            for(int j=1;j*j<=i;j++){
                if(i%j==0){
                    if(j<i&&arr[i]>arr[j]){
                        dp[i]=max(dp[i],dp[j]+1);
                    }
                    if(i/j<i&&i/j!=j&&arr[i]>arr[i/j]){
                        dp[i]=max(dp[i],dp[i/j]+1);
                    }
                }
            }
        }
        int ans=0;
        for(auto it:dp){
            ans=max(ans,it);
        }
        cout<<ans<<endl;
    }
    return 0;
}