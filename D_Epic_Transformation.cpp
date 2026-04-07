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
        map<int,int>mp;
        int mx=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
            mx=max(mx,mp[x]);
        }
        if(mx>n-mx){
            cout<<-n+2*mx<<endl;
        }else{
            cout<<n%2<<endl;
        }
    }
    return 0;
}


// //1
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main() {
//     // Your code here
//     int n,k;
//     cin>>n>>k;
//     vector<int>arr(n+1);
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//     }
//     vector<vector<int>>dp(n+1,vector<int>(k+1,1e18));
//     int mx=arr[1];
//     int mn=arr[1];
//     for(int i=1;i<=n;i++){
//         mx=max(mx,arr[i]);
//         mn=min(mn,arr[i]);
//         dp[i][1]=(mx-mn)*i;
//     }
//     for(int i=2;i<=k;i++){
//         for(int j=i;j<=n;j++){
//             int mx1=0;
//             int mn1=1e18;
//             for(int k=j;k>=i;k--){
//                 mx1=max(mx1,arr[k]);
//                 mn1=min(mn1,arr[k]);
//                 if(dp[k-1][i-1]!=1e18){
//                     int cost=dp[k-1][i-1]+(mx1-mn1)*(j-k+1);
//                     dp[j][i]=min(cost,dp[j][i]);
//                 }
//             }
//         }
//     }
//     cout<<dp[n][k]<<endl;
//     return 0;
// }



// /2
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main() {
//     // Your code here
//     int n,m,k;
//     cin>>n>>m>>k;
//     vector<vector<pair<int,int>>>adj(n+1);
//     vector<vector<int>>arr(n+1);
//     for(int i=0;i<m;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         adj[u].push_back({v,w});
//         adj[v].push_back({u,w});
//     }
//     for(int i=0;i<k;i++){
//         int a,b;
//         cin>>a>>b;
//         arr[a].push_back(b);
//         arr[b].push_back(a);
//     }
//     vector<vector<int>>dis(n+1,vector<int>(k+1,1e18));
//     priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
//     dis[1][0]=0;
//     pq.push({0,{1,0}});
//     while(!pq.empty()){
//         auto top=pq.top();
//         pq.pop();
//         int cost=top.first;
//         int u=top.second.first;
//         int type=top.second.second;
//         if(cost>dis[u][type])continue;
//         for(auto it:adj[u]){
//             int v=it.first;
//             int w=it.second;
//             if(dis[v][type]>cost+w){
//                 dis[v][type]=cost+w;
//                 pq.push({dis[v][type],{v,type}});
//             }
//         }
//         if(type<k){
//             for(auto v:arr[u]){
//                 if(dis[v][type+1]>cost){
//                     dis[v][type+1]=cost;
//                     pq.push({cost,{v,type+1}});
//                 }
//             }
//         }
//     }
//     int ans=1e18;
//     for(int i=0;i<=k;i++){
//         ans=min(ans,dis[n][i]);
//     }
//     if(ans==1e18)cout<<-1<<endl;
//     else cout<<ans<<endl;
//     return 0;
// }

// //3

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int>cost;
// vector<vector<int>>adj;
// pair<int,int>f(int u){
//     int take=cost[u];
//     int nottake=0;
//     for(auto v:adj[u]){
//         auto it=f(v);
//         take+=it.second;
//         nottake+=max(it.first,it.second);
//     }
//     return {take,nottake};
// }
// signed main() {
//     // Your code here
//     int n;
//     cin>>n;
//     cost.resize(n+1);
//     for(int i=1;i<=n;i++){
//         cin>>cost[i];
//     }
//     adj.resize(n+1);
//     for(int i=0;i<n-1;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//     }
//     auto ans=f(1);
//     cout<<max(ans.first,ans.second)<<endl;
//     return 0;
// }