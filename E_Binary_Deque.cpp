#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,s; cin>>n>>s;
        vector<int>arr(n);
        vector<int>help(n+1);
        help[0]=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            help[i+1]=help[i]+arr[i];
        }
        int ans=1e18;
        for(int i=0;i<=n;i++){
            int x=help[i]+s;        
            auto it=upper_bound(help.begin(),help.end(),x)-help.begin();
            if(it<=n){
                ans=min(ans,n-(it-i));
            }
        }
        if(ans!=1e18)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}