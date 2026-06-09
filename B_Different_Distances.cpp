#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<n<<" ";
        for(int i=1;i<=n-1;i++){
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}