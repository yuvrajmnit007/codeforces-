#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int a,b,c;
        if(n%3==0){
            a=n/3;
            b=a;
            c=a;
        }else if(n%4==0){
            a=n/4;
            b=a;
            c=n/2;
        }else if(n%2==0){
            a=(n-1)/2;
            b=(n-1)/2;
            c=2;
        }else{
            a=n/2;
            b=n/2;
            c=1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}