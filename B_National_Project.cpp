#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,g,b;
        cin>>n>>g>>b;
        int a=(n+1)/2;
        int x=a/g;
        int rem=a%g;
        int ans=0;
        if(rem==0){
            ans=b*(x-1)+g*x;
        }else{
            ans=x*b+g*x+rem;
        }
        cout<<max(ans,n)<<endl;
    }
    return 0;
}