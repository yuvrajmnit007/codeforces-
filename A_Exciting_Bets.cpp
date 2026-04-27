#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int ans=abs(n-k);
        if(ans==0){
            cout<<0<<" "<<0<<endl;
        }else{
            int a=n/ans;
            int b=a+1;
            int mn=min(abs(a*ans-n),abs(b*ans-n));
            cout<<ans<<" "<<mn<<endl;
        }
    }
    return 0;
}