#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            a[i]=max(a[i],b[i]);
        }
        for(int i=n-2;i>=0;i--){
            a[i]=max(a[i],a[i+1]);
        }
        vector<int>help(n);
        help[0]=a[0];
        for(int i=1;i<n;i++){
            help[i]=help[i-1]+a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l==1)cout<<help[r-1]<<" ";
            else cout<<help[r-1]-help[l-2]<<" ";
        }
        cout<<endl;
    }
    return 0;
}