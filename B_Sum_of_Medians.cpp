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
        vector<int>arr(n*k);
        for(int i=0;i<n*k;i++)cin>>arr[i];
        sort(arr.begin(),arr.end());
        int ans=0;
        int m=n*k;
        while(k--){
            m-=n/2+1;
            ans+=arr[m];
        }
        cout<<ans<<endl;
    }
    return 0;
}