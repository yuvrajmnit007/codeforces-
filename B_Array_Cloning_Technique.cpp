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
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        if(mx==n){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        while(2*mx<n){
            ans+=mx+1;
            mx*=2;
        }
        ans+=n-mx+1;
        cout<<ans<<endl;
    }
    return 0;
}