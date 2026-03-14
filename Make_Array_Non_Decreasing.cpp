#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                ans+=(arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}