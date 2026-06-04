#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>dp;
int f(vector<int>&arr,int idx,int sz){
    if(idx>=sz)return 0;
    int take=1e18,nottake=1e18;
    if(dp[idx]!=-1)return dp[idx];
    if(arr[idx]+idx<sz){
        take=f(arr,arr[idx]+1+idx,sz);
    }
    nottake=1+f(arr,idx+1,sz);
    return dp[idx]=min(take,nottake);
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        dp.assign(n,-1);
        int ans=f(arr,0,n);
        cout<<ans<<endl;
    }
    return 0;
}