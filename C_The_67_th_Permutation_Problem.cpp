#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<i+1<<" "<<n+2*i+1<<" "<<n+2*i+2<<" ";
        }
        cout<<endl;
    }
    return 0;
}