#include <bits/stdc++.h>
using namespace std;
#define int long long
long double f(vector<pair<long double,long double>>&vec,int idx,long double s, map<pair<int,long double>,long double>&dp){
    int n=vec.size();
    if(idx==n)return 0;
    if(dp.count({idx,s})) return dp[{idx,s}];
    long double take=-1e18;
    long double nottake=-1e18;
    take=vec[idx].first*s+f(vec,idx+1,s*(1-vec[idx].second/100),dp);
    nottake=f(vec,idx+1,s,dp);
    return dp[{idx,s}]=max(take,nottake);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<pair<long double,long double>>vec;
        for(int i=0;i<n;i++){
            long double a,b;
            cin>>a>>b;
            vec.push_back({a,b/100});
        }
        //map<pair<int,long double>,long double>dp;
        //cout<<fixed<<setprecision(10)<<f(vec,0,1,dp)<<endl;
        long double ans=0;
        for(int i=n-1;i>=0;i--){
            ans=max(ans,ans*(1-vec[i].second)+vec[i].first);
        }
        cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}