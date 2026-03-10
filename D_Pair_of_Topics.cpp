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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            a[i]-=b[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int k=-a[i];
            auto it=upper_bound(a.begin()+i+1,a.end(),k);
            ans+=(a.end()-it);
        }
        cout<<ans<<endl;
    }
    return 0;
}