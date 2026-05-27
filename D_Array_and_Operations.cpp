#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        int i;
        for(i=0;i<n-2*k;i++){
            ans+=arr[i];
        }
        for(int j=i;j<i+k;j++){
            ans+=(arr[j]/arr[j+k]);
        }
        cout<<ans<<endl;
    }
    return 0;
}