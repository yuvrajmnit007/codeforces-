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
        int rem=k%4;
        int p=k-rem+1;
        while(rem--){
            if(n%2==0){
                n-=p;
                p++;
            }else{
                n+=p;
                p++;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}