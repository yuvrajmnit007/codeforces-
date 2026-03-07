#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
       int x,y;
       cin>>x>>y;
       int n;
       cin>>n;
       int k=n%6;
         if(k==0)cout<<(x-y+2*MOD)%MOD<<endl;
         else if(k==1)cout<<(x+2*MOD)%MOD<<endl;
         else if(k==2)cout<<(y+2*MOD)%MOD<<endl;
         else if(k==3)cout<<(y-x+2*MOD)%MOD<<endl;
         else if(k==4)cout<<(-x+2*MOD)%MOD<<endl;
         else cout<<(-y+MOD)%MOD<<endl;
    }
    return 0;
}