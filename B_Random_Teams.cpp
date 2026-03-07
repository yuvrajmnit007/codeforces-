#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int mn=0,mx=0;
        if(n%m==0){
            mn=(n)*(n-m)/(2*m);
            mx=(n-m)*(n-m+1)/2;
        }else{
            mn=(((n/m+1)*(n/m))/2)*(n%m)+(((n/m)*(n/m-1))/2)*(m-(n%m));
            mx=(n-m)*(n-m+1)/2;
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}