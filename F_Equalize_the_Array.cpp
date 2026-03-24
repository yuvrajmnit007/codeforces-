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
        unordered_map<int,int>mp1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp1[arr[i]]++;
        }
        vector<int>mp;
        int sum=0;
        for(auto it:mp1){
            int j=it.second;
            sum+=j;
            mp.push_back(j);
        }
        sort(mp.begin(),mp.end());
        vector<int>pre(mp.size());
        pre[0]=mp[0];
        for(int i=1;i<mp.size();i++){
            pre[i]=pre[i-1]+mp[i];
        }
        int l=0,r=pre[mp.size()-1];
        int x=mp.size();
        int ans=sum;
        for(int i=0;i<x;i++){
            int temp=mp[i];
            int left=0;
            if(i>0)left=pre[i-1];
            int right=pre[x-1]-pre[i]-(x-i-1)*temp;
            ans=min(ans,left+right);
        }
        cout<<ans<<endl;
    }
    return 0;
}