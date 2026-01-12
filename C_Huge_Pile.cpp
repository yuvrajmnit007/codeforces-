#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(int n,int k,vector<pair<int,int>>& dp) {
    if (n==k)return 0;
    if (n<k)return -1;
    for (auto it:dp) {
        if (it.first==n) return it.second;
    }
    int ans=-1;
    int up=solve(n/2,k,dp);
    if (up!=-1)ans=1+up;
    int down=solve((n+1)/2,k,dp);
    if (down!=-1) {
        if(ans==-1)ans=1+down;
        else ans=min(ans,1+down);
    }
    dp.push_back({n,ans});
    return ans;
}
signed main() {
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>dp;
        cout<<solve(n,k,dp) <<endl;
    }
    return 0;
}
