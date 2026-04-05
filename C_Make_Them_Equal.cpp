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
        char a;
        cin>>n>>a;
        string s;
        cin>>s;
        bool ok=true;
        for(int i=0;i<n;i++){
            if(s[i]!= a) {
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
        int temp=-1;
        for(int x=1;x<=n;x++) {
            bool ok1=true;
            for(int p=x;p<=n;p+=x) {
                if(s[p-1]!=a) {
                    ok1=false;
                    break;
                }
            }
            if(ok1){
                temp=x;
                break;
            }
        }
        if(temp!=-1){
            cout<<1<<endl;
            cout<<temp<<endl;
        }else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}