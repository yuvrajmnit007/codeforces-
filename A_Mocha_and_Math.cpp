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
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans=1e18;
        for(int i=0;i<n;i++){
            int temp=arr[i];
            for(int j=i+1;j<n;j++){
                temp=temp&arr[j];
            }
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}