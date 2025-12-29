#include<bits/stdc++.h>
using namespace std;
// int solve(vector<int>&arr,vector<int>&dp,int n){
//     if(n==0)return 0;
//     if(dp[n]!=-1)return dp[n];
//     int left=solve(arr,dp,n-1)+abs(arr[n]-arr[n-1]);
//     int right=INT_MAX;
//     if(n>1) right=solve(arr,dp,n-2)+abs(arr[n]-arr[n-2]);
//     return dp[n]=min(left,right);
// }
int main(){
    int n; 
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // vector<int>dp(n+1,-1);
    // dp[0]=0;
    int prev2=0;
    int prev1=0;
    for(int i=1;i<n;i++){
        int fs=prev1+abs(arr[i]-arr[i-1]);
        int ss=INT_MAX;;
        if(i>1){
            ss=prev2+abs(arr[i]-arr[i-2]);
        }
        prev2=prev1;
        prev1=min(fs,ss);
        // dp[i]=min(fs,ss);   
    }
    cout<<prev1<<endl;
    // cout<<solve(arr,dp,n-1)<<endl;
    return 0;
}