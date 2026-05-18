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
        int ans=0;
        if(3*b<=c){
            cout<<a*b<<endl;
        }else{
            cout<<a/3*c+min((a%3)*b,c)<<endl;
        }
    }
    return 0;
}