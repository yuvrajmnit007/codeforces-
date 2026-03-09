#include <bits/stdc++.h>
using namespace std;
#define int long long
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int x;
        cin>>x;
        int a=1e18,b=1e18;
        for(int i=1;i*i<=x;i++){
            if(x%i==0){
                if(lcm(i,x/i)==x){
                    if(max(a,b)>max(i,x/i)){
                        a=min(i,x/i);
                        b=max(i,x/i);
                    }
                }
            }
        }
        cout<<min(a,b)<<" "<<max(a,b);
    }
    return 0;
}