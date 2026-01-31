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
        int n0=n;
        int p=0,q=0;
        while(n%2==0&&n!=0){
            p++;
            n=n/2;
        }
        while(n%5==0&&n!=0){
            q++;
            n=n/5;
        }
        int k=1;
        while(p<q&&k*2<=m){
            k=k*2;
            p++;
        }
        while(q<p&&k*5<=m){
            k=k*5;
            q++;
        }
        while(k*10<=m){
            k=k*10;
        }
        if(k==1){
            cout<<m*n0<<endl;
        }else{
            cout<<n0*k*(m/k)<<endl;
        }
    }
    return 0;
}