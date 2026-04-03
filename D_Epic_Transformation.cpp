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
        map<int,int>mp1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto it:mp){
            mp1[it.second]++;
        }
        vector<int>help;
        int ans=0;
        for(auto &i:mp1){
            if(i.second==1){
                help.push_back(i.first);
            }
        }
        sort(help.rbegin(),help.rend());
        for(int i=0;i<help.size();i++){
            if(ans>0){
                ans-=help[i];
            }else{
                ans+=help[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}