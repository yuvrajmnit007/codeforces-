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
        vector<vector<int>>arr(n,vector<int>(n));
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        string ans="YES";
        for(auto it:mp){
            if(it.second>n*(n-1)){
                ans="NO";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}