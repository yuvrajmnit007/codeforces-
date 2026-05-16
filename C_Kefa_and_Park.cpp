#include <bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int node,int parent,vector<vector<int>>&adj,vector<int>&arr,int k,int &ans,int count){
    if(arr[node]==1)count++;
    else count=0;
    if(count>k)return;
    bool leaf=true;
    for(auto it:adj[node]){
        if(it!=parent){
            leaf=false;
            dfs(it,node,adj,arr,k,ans,count);
        }
    }
    if(leaf)ans++;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>adj(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    dfs(0,-1,adj,arr,k,ans,0);
    cout<<ans<<endl;
    return 0;
}