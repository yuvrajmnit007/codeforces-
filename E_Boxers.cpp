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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(auto it:arr){
            if(it>1&&mp[it-1]==0){
                mp[it-1]=1;
            }else if(mp[it]==0){
                mp[it]=1;
            }else{
                mp[it+1]=1;
            }
        }
        cout<<mp.size()<<endl;
    }
    return 0;
}