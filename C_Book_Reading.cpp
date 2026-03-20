#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int sum=0;
        for(int i=0;i<10;i++){
            int val=m*(i+1);
            sum+=(val%10);
        }
        int rem=n%(m*10);
        int ans=0;
        for(int i=0;i<=rem;i=i+m){
            ans+=i%10;
        }
        int c=n/(10*m);
        cout<<c*sum+ans<<endl;
    }
    return 0;
}