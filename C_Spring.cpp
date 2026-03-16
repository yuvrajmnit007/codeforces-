#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;

    while(t--) {
        int a,b,c,m;
        cin >>a>>b>>c>>m;
        int lcm =(a*b)/__gcd(a,b);
        lcm =(lcm*c)/__gcd(lcm,c);
        int ans1=6*(m/a);
        int ans2=6*(m/b);
        int ans3=6*(m/c);
        int lcm1=(a*b)/__gcd(a,b);
        int lcm2=(a*c)/__gcd(a,c);
        int lcm3=(b*c)/__gcd(b,c);
        ans1-=4*(m/lcm);
        ans2-=4*(m/lcm);
        ans3-=4*(m/lcm);
        if(lcm1!=lcm){
            ans1-=3*(m/lcm1-m/lcm);
            ans2-=3*(m/lcm1-m/lcm);
        }
        if(lcm2!=lcm){
            ans1-=3*(m/lcm2-m/lcm);
            ans3-=3*(m/lcm2-m/lcm);
        }
        if(lcm3!=lcm){
            ans3-=3*(m/lcm3-m/lcm);
            ans2-=3*(m/lcm3-m/lcm);
        }
        cout <<ans1<<" "<<ans2<<" "<<ans3<< endl;
    }
    return 0;
}