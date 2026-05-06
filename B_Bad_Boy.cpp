#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        if(i==1&&j==1){
            cout<<n<<" "<<m<<" "<<n<<" "<<1<<endl;
        }else{
            cout<<1<<" "<<1<<" ";
            if(i==n&&j==m){
                cout<<1<<" "<<m<<endl;
            }else{
                cout<<n<<" "<<m<<endl;
            }
        }
    }
    return 0;
}