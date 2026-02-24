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
        vector<int>arr(n*k+1);
        arr[0]=0;
        for(int i=1;i<=n*k;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=k;i<=n*k;i=i+k-1){
            ans+=arr[k];
        }
        cout<<ans<<endl;
    }
    return 0;
}