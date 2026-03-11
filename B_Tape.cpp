#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>arr(n),b(n-1);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
                b[i-1]=(arr[i]-arr[i-1]);
            }
        }
        sort(arr.begin(),arr.end());
        sort(b.rbegin(),b.rend());
        int ans=arr[n-1]-arr[0]+1;
        for(int i=0;i<k-1;i++){
            ans-=(b[i]-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}