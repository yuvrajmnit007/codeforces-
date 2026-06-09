#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>cnt(1001,INT_MAX);
    cnt[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int v=q.front();q.pop();
        for(int x=1;x<=v;x++){
            int nxt=v+v/x;
            if(nxt<=1000&&cnt[nxt]==INT_MAX){
                cnt[nxt]=cnt[v]+1;
                q.push(nxt);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k=min(k,15000LL);
        vector<int>b(n),c(n);
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<n;i++)cin>>c[i];
        vector<int>dp(k+1,0);
        for(int i=0;i<n;i++){
            int cost=cnt[b[i]];
            if(cost==INT_MAX)continue;
            for(int j=k;j>=cost;j--)
                dp[j]=max(dp[j],dp[j-cost]+c[i]);
        }
        cout<<*max_element(dp.begin(),dp.end())<<endl;
    }
    return 0;
}