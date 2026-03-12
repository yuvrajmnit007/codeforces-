#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int idx,vector<int>&arr,int ans,int prev,map<pair<int,int>,int>&dp){
    if(prev==ans)return 0;
    if(idx>=arr.size())return 1e18;
    if(dp.count({idx,prev}))return dp[{idx,prev}];
    int nottake=f(idx+1,arr,ans,prev,dp);
    int take=1e18;
    if(idx<arr.size()){
        prev=__gcd(prev,arr[idx]);
        take=1+f(idx+1,arr,ans,prev,dp);
    }
    return dp[{idx,prev}]=min(take,nottake);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int x=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            x=__gcd(x,arr[i]);
        }
        map<pair<int,int>,int>dp;
        int  ans=f(0,arr,x,0,dp);
        if(ans==1){
            for(int i=0;i<n;i++){
                if(arr[i]!=x){
                    ans++;
                }
            }
            ans--;
        }else{
            ans+=n-2;
        }
        cout<<ans<<endl;
    }
    return 0;
}