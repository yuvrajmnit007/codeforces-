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
        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int  ans=0;
        for(auto &it:mp){
            int p=it.first;
            ans+=max(0LL,mp[p]-mp[p-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}