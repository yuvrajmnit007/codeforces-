#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int ans=1e18;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans=min(ans,abs(arr[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}