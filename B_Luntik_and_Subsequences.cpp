#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int zeros=0,ones=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)ones++;
            if(x==0)zeros++;
        }
        int ans=1;
        for(int i=0;i<zeros;i++){
            ans=ans*2;
        }
        cout<<ans*ones<<endl;
    }
    return 0;
}