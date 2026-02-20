#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        double n,t;
        cin>>n>>t;
        double ans=n*pow(1.000000011,t);
        cout<<fixed<<setprecision(30)<<ans<<endl;
    }
    return 0;
}