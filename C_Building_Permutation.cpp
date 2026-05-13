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
        ans+=abs(arr[i]-i-1);
    }
    cout<<ans<<endl;
    return 0;
}