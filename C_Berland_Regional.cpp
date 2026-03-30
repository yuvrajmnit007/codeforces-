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
        vector<int>arr(n),arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<vector<int>>mp(n+1);
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(arr1[i]);
        }
        vector<int>ans(n+1,0);
        for(int i=1;i<=n;i++){
            if(mp[i].empty())continue;
            sort(mp[i].rbegin(),mp[i].rend());
            int sz=mp[i].size();
            vector<int>pre(sz+1,0);
            for(int j=1;j<=sz;j++){
                pre[j]=pre[j-1]+mp[i][j-1];
            }
            for(int j=1;j<=sz;j++){
                int temp=(sz/j)*j;
                ans[j]+=pre[temp];
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}