#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(vector<int>&arr,int rem,int idx,int prev){
    if(idx==0){
        if(rem==1&&prev!=idx+1)return arr[0];
        else return 1e18;
    }
    if(rem==0)return 1e18;
    int take=-1e18;
    int nottake=f(arr,rem,idx-1,prev);
    if(idx+1!=prev){
        take=max({arr[idx],f(arr,rem-1,idx-1,idx)});
    }
    return min(take,nottake);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        // cout<<f(arr,k,n-1,n+2);
        // // vector<int>dp(n+1,1e18);
        // // dp[0]=0;
        // // for(int i=1;i<=n;i++){
        // //     for(int j=1;j<=k&&j<=i;j++){
        // //         if(i-j-1>=0){
        // //             dp[i]=min(dp[i],max(dp[i-j-1],arr[i-j]));
        // //         }else{
        // //             dp[i]=min(dp[i],arr[i-j]);
        // //         }
        // //     }
        // // }
        // // cout<<dp[n]<<endl;
        int low=0;int high=1e18;
        while(low<high){
            int mid=(low+high)/2;
            int cnt=0;int prev=-2;
            for(int i=0;i<n;i++){
                if(arr[i]<=mid&&i!=prev+1){
                    cnt++;
                    prev=i;
                }
            }
            if(cnt>=k)high=mid;
            else low=mid+1;
        }
        cout<<low<<endl;
    }
    return 0;
}