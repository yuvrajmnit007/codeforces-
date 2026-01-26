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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        vector<int>help(n+1,0);
        for(int i=0;i<n;i++){
            help[i+1]=help[i]+b[i];
        }
        int ans=0;
        for(int j=1;j<=n;j++){
            int x=a[j-1];
            int lvl =upper_bound(help.begin(),help.end(),j)-help.begin()-1;
            ans =max(ans,x*lvl);
        }
        cout<<ans<<endl;
    }
    return 0;
}