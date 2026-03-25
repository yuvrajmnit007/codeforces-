#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>dp;
int f(int idx,int prev,vector<int>arr){
    if(idx<0)return 0;
    if(dp[idx][prev]!=-1)return dp[idx][prev];
    int rest=1+f(idx-1,0,arr);
    if((arr[idx]==1||arr[idx]==3)&&prev!=1){
        rest=min(rest,f(idx-1,1,arr));
    }
    if((arr[idx]==2||arr[idx]==3)&&prev!=2){
        rest=min(rest,f(idx-1,2,arr));
    }
    return dp[idx][prev]=rest;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        dp.resize(n,vector<int>(5,-1));
        cout<<f(n-1,4,arr)<<endl;
    }
    return 0;
}