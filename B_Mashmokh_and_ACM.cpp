#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int f(int n,int k,int prev){



    int take=-1e18,nottake=-1e18;
    for(int i=1;i<=n;i++){
        take=1+f(n,k-1,i);
    }
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int ans=f(n,k,0);
        cout<<ans<<endl;
    }
    return 0;
}