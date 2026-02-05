#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>vis;
        int p=arr[0];
        vector<pair<int,int>>help;
        for(int i=1;i<n;i++){
            if(p!=arr[i]){
                help.push_back({1,i+1});
            }
            else{
                vis.push_back(i+1);
            }
        }
        if(vis.size()==n-1){
            cout<<"NO"<<endl;
        }else{
            int j=0;
            for(int i=n-1;i>=0;i--){
                if(arr[i]!=p){
                    j=i+1;
                    break;
                }
            }
            cout<<"YES"<<endl;
            for(int i=0;i<vis.size();i++){
                cout<<vis[i]<<" "<<j<<endl;
            }
            for(auto x:help){
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
    }
    return 0;
}