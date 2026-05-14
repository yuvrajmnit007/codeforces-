#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int k=upper_bound(arr.begin(),arr.end(),arr[i]+5)-arr.begin();
        ans=max(ans,k-i);
    }
    cout<<ans<<endl;
    return 0;
}