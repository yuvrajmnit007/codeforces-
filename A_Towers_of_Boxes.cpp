#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m,d;
        cin>>n>>m>>d;
        int k=1+d/m;
        cout<<(n+k-1)/k<<endl;
    }
    return 0;
}
