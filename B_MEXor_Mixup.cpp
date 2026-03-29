#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int x=0;
        int r=a%4;
        for(int i=a-r;i<a;i++){
            x=x^i;
        }
        int p=x^b;
        if(x==b){
            cout<<a<<endl;
        }else if(p!=a){
            cout<<a+1<<endl;
        }else if(p==a){
            cout<<a+2<<endl;
        }
    }
    return 0;
}