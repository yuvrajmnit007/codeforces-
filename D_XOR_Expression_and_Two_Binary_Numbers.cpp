#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        string s,z;
        cin>>s>>z;
        string xz(n,'0');
        for(int i=0;i<n;i++){
            xz[i]=((s[i]-'0')^(z[i]-'0'))+'0';
        }
        int total=(1<<k)+1;
        int cs=((1<<k)+2)/3;
        if((1<<k)%3==0)cs=(1<<k)/3;
        int cxz=total-2*cs;
        int os=0;
        for(auto c:s)os+=(c=='1');
        int oz=0;
        for(auto c:z)oz+=(c=='1');
        int oxz=0;
        for(auto c:xz)oxz+=(c=='1');
        int ans=cs*os*(n-os)+cs*oz*(n-oz)+cxz*oxz*(n-oxz); 
        cout<<ans<<endl;
    }
    return 0;
}