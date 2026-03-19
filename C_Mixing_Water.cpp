#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=2*c){
            cout<<2<<endl;
        }else{
            int r=(2*c-a-b);
            int k=(a-c)/r;
            int val1=((k+1)*a+k*b)-(2*k+1)*c;
            int val2=((k+2)*a+(k+1)*b)-(2*k+3)*c;
            if(abs(val1)*(2*k+3)<=abs(val2)*(2*k+1)){
                cout<<2*k+1<<endl;
            }else{
                cout<<2*k+3<<endl;
            }
        }
    }
    return 0;
}