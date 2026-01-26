#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> help(n+1,0);
        for (int i = 0; i<n; i++) {
            cin >>a[i];
            help[a[i]]++;
        }
        vector<int> dp(n+1,1e18);
        for (int i=1; i<=n;i++) {
            if(help[i]>0)dp[i]=1;
        }
        for (int v=2;v<=n;v++) {
            if (help[v]==0) continue;
            for (int j =v*2;j<=n;j+= v) {
                if (dp[j/v]!= 1e18) {
                    dp[j]=min(dp[j],dp[j/v]+1);
                }
            }
        }
        for (int i =1;i<=n;i++) {
            if (dp[i]==1e18)
                cout<<-1<<" ";
            else
                cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
