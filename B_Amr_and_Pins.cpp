#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int k=pow((d-b),2)+pow((a-c),2);
        int len=ceil(sqrt(k));
        cout<<ceil((len+2*n-1)/(2*n))<<endl;
    }
    return 0;
}