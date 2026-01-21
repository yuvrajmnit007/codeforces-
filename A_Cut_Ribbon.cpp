#include<bits/stdc++.h>
using namespace std;
int f(int n,int a,int b,int c,vector<int>&dp){
    if(n<0){
        return -1e9;
    }
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=1+max(f(n-a,a,b,c,dp),max(f(n-b,a,b,c,dp),f(n-c,a,b,c,dp)));
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int>dp(n+1,-1);
    cout<<f(n,a,b,c,dp)<<endl;
    return 0;
}