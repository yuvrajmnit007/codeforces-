#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int m;
        cin>>m;
        vector<int>b(m),c(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        int ans=0;
        int prev=-1;
        int prev1=-1;
        for(int i=0;i<m;i++){
            int x=mp[b[i]];
            int y=mp[c[i]];
            if(x>prev||(x==prev&&y>prev1)){
            prev=x;
            prev1=y;
            ans=i;
        }

        }
        cout<<ans+1<<endl;
    }
    return 0;
}