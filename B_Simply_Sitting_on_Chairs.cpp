#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int ans=0;
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<=i+1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}