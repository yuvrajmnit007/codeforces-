#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mod=1e9+7;
        int ans =((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
        cout<<ans<<endl;
    }
    return 0;
}
