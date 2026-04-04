#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(vector<vector<int>>&adj){
    int n=adj.size();
    // for(int i=0;i<n;i++){
    //     cout<<i<<": ";
    //     for(auto it:adj[i]){
    //         cout<<it<<' ';
    //     }
    //     cout<<endl;
    // }
    vector<int>vis(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            queue<int>q;
            q.push(i);
            vis[i]=1;
            // cout<<i<<' ';
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto it:adj[node]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                        //cout<<it<<' ';
                    }
                }
            }
        }
    }
    return count;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int mx=0;
    vector<vector<int>>arr(m,vector<int>(3));
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(j==2)mx=max(mx,arr[i][j]);
        }
    }
    int l=0,r=mx;
    while(l<=r){
        int mid=(l+r)/2;
        int val=0;
        vector<vector<int>>adj(n);
        for(int i=0;i<m;i++){
            if(arr[i][2]>mid){
                adj[arr[i][0]].push_back(arr[i][1]);
                adj[arr[i][1]].push_back(arr[i][0]);
            }
        }
        val=f(adj);
        //cout<<val<<endl;
        if(val<k){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<r+1<<endl;
    return 0;
}