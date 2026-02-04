#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<int>s;
    int help;
    for(int i=2;i<=1000;i++){
        help=i+1;
        int p=i*i;
        for(int j=2;j<=20;j++){
            help+=p;
            if(help<1e6)s.insert(help);
            p=p*i;
        }
    }
    while (t--) {
        int n;
        cin>>n;
        if(s.count(n))cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}