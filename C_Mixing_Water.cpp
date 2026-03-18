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
            //int k=(a-c)/(2*c-a-b);
            double denom = (double)(2*c - a - b);
            int k = (int)floor((a - c) / denom);
            if(k < 0) k = 0; 
            //cout<<k<<endl;
            double val1=((double)(k+1)*a+(double)k*b)/(2*k+1);
            double val2=((double)(k+2)*a+(double)(k+1)*b)/(2*k+3);
            //cout<<val1<<" "<<val2<<endl;
            if(abs(val1-c)<=abs(val2-c)){
                cout<<2*k+1<<endl;
            }else{
                cout<<2*k+3<<endl;
            }
        }
    }
    return 0;
}