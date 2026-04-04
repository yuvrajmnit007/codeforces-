#include <bits/stdc++.h>
using namespace std;
#define int long long
int dfs(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&vis){
    if(i<0||j<0||i>=arr.size()||j>=arr[0].size()||vis[i][j]||arr[i][j]==0){
        return 0;
    }
    vis[i][j]=1;
    int ans=arr[i][j];
    ans+=max({dfs(i+1,j,arr,vis),dfs(i-1,j,arr,vis),dfs(i,j+1,arr,vis),dfs(i,j-1,arr,vis)});
    return ans;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<vector<int>>arr(n,vector<int>(k));
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cin>>arr[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                vector<vector<int>>vis(n,vector<int>(k,0));
                if(arr[i][j]!=0){
                    ans=max(ans,dfs(i,j,arr,vis));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}