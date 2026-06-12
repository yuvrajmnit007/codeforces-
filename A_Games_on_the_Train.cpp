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
        vector<int>arr(n);
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        int ans=0;
        mx++;
        for(int i=0;i<n;i++){
            ans=max(ans,mx-arr[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}