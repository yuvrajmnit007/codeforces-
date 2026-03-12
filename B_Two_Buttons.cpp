#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>vis(20001,0);
        queue<pair<int,int>>q;
        q.push({n,0});
        vis[n]=1;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x==m){
                cout<<y<<endl;
                return 0;
            }
            if(2*x<20001&&vis[2*x]==0){
                vis[2*x]=1;
                q.push({2*x,y+1});
            }
            if(x-1>=0&&vis[x-1]==0){
                vis[x-1]=1;
                q.push({x-1,y+1});
            }
        }
    }
    return 0;
}