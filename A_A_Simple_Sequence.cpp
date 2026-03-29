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
        cout<<n-1<<" "<<n<<" ";
        for(int i=n-2;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}