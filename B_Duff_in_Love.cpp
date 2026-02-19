#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        int ans=1;
        if(n%2==0){
            ans*=2;
            while(n%2==0){
                n=n/2;
            }
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                ans=ans*i;
                while(n%i==0){
                    n=n/i;
                }
            }
        }
        if(n>1)ans*=n;
        cout<<ans<<endl;
    }
    return 0;
}