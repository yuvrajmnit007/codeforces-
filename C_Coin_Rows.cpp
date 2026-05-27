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
        vector<int>arr1(n+1),arr2(n+1);
        vector<int>pre1(n+1,0),pre2(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr1[i];
            pre1[i]=pre1[i-1]+arr1[i];
        }
        for(int i=1;i<=n;i++){
            cin>>arr2[i];
            pre2[i]=pre2[i-1]+arr2[i];
        }
        int ans=1e18;
        for(int i=1;i<=n;i++){
            int temp=max(pre2[i-1],pre1[n]-pre1[i]);
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}