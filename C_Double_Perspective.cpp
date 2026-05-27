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
        map<int,pair<int,int>>mp;
        int ans=0;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(mp.find(a)==mp.end()){
                ans++;
                mp[a]={b,i};
            }else{
                if(mp[a].first<b){
                    mp[a].first=b;
                    mp[a].second=i;
                }
            }
        }
        cout<<ans<<endl;
        for(auto it:mp){
            cout<<it.second.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}