#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>dp;
int f(vector<int>&arr,int h,int idx,int val,int l,int r){
    int n=arr.size();
    if(idx>=n)return 0;
    if(dp[idx][val]!=-1)return dp[idx][val];
    int val1=(arr[idx]+val)%h;
    int val2=(arr[idx]+val-1)%h;
    int take,nottake;
    if(val1>=l&&val1<=r)take=1+f(arr,h,idx+1,val1,l,r);
    else take=f(arr,h,idx+1,val1,l,r);
    if(val2>=l&&val2<=r)nottake=1+f(arr,h,idx+1,val2,l,r);
    else nottake=f(arr,h,idx+1,val2,l,r);
    return dp[idx][val]=max(take,nottake);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h,l,r;
    cin>>n>>h>>l>>r;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dp.resize(n,vector<int>(h,-1));
    cout<<f(arr,h,0,0,l,r)<<endl;
    return 0;
}