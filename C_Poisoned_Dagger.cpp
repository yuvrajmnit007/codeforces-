#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,h;
        cin>>n>>h;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int low=0,hi=1e18;
        int ans;
        while(low<=hi){
            int mid=low+(hi-low)/2;
            int total=0;
            for(int i=1;i<n;i++){
                total+=min(mid,arr[i]-arr[i-1]);
            }
            total+=mid;
            if(total>=h){
                ans=mid;
                hi=mid-1;
            }else{
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}