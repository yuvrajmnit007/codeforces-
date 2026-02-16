#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int  n,m;
        cin>>n>>m;
        vector<int>a1(n+1);
        vector<int>a2(m+1);
        for(int i=0;i<=n;i++){
            cin>>a1[i];
        }
        for(int j=0;j<=m;j++){
            cin>>a2[j];
        }
        if(n==m){
            int p=__gcd(a1[0],a2[0]);
            int a=a1[0]/p;
            int b=a2[0]/p;
            if(b<0){
                a=-a;
                b=-b;
            }
            cout<<a<<"/"<<b<<endl;
        }else if(n>m){
            if(a1[0]*a2[0]<0)cout<<"-Infinity"<<endl;
            else cout<<"Infinity"<<endl;
        }else{
            cout<<"0/1"<<endl;
        }
    }
    return 0;
}