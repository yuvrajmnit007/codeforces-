#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<int,int>>help;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            help.push_back({x,y});
        }
        sort(help.begin(),help.end());
        int k=0;
        for(int i=0;i<n;i++){
            if(k<=help[i].second){
                k=help[i].second;
            }else {
                k=help[i].first;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}