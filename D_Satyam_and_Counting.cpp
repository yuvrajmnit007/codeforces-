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
        vector<pair<int,int>>help;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            help.push_back({x,y});
            if(y)mp1[x]++;
            else mp2[x]++;
        }
        int ans=0;
        for(auto it:mp1){
            int x=it.first;
            if(it.second&&mp2[x]){
                ans+=(n-2);
            }
        }
        for(auto it:mp1){
            int x=it.first;
            if(mp2[x-1]&&mp2[x+1]&&it.second){
                ans++;
            }
        }
        for(auto it:mp2){
            int x=it.first;
            if(mp1[x-1]&&mp1[x+1]&&it.second){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}