#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        b--;
        c--;
        vector<int>x(n),y(n);
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        int mn1,mn2;
        mn1=mn2=1e18;
        for(int i=0;i<a;i++){
            mn1=min(mn1,abs(x[b]-x[i])+abs(y[b]-y[i]));
        }
        for(int i=0;i<a;i++){
            mn2=min(mn2,abs(x[c]-x[i])+abs(y[c]-y[i]));
        }
        cout<<min(mn1+mn2,abs(x[c]-x[b])+abs(y[c]-y[b]))<<endl;
    }
    return 0;
}