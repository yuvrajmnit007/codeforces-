#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<"Alice"<<endl;
            continue;
        }
        if(3*n==2*m){
            cout<<"Bob"<<endl;
            continue;
        }
        if(2*m<=3*n&&(-n+m)>0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}