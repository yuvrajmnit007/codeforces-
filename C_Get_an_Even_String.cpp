#include<bits/stdc++.h>
using namespace std;
int f(int idx,string st,char prev, vector<int>&dp){
    if(idx<0){
        return 0;
    }
    int j=27*idx;
    if(prev!='&')j+=prev-'a'+1;
    if(dp[j]!=-1)return dp[j];
    int take=0,nottake=0;
    if(prev==st[idx]){
        take=2+f(idx-1,st,'&',dp);
    }else if(prev=='&'){
        take=0+f(idx-1,st,st[idx],dp);
    }
    nottake=f(idx-1,st,prev,dp);
    return dp[j]=max(take,nottake);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int n=st.size();
        //vector<int>dp(27*n,-1);
        //cout<<n-f(n-1,st,'&',dp)<<endl;
        vector<vector<int>>dp(n+1,vector<int>(27,0));
        for(int idx=0;idx<n;idx++){
            for(int j=0;j<27;j++){
                char prev=(j==0)?'&':'a'+j-1;
                int take=0,nottake=0;
                if(prev==st[idx]){
                    take=2+dp[idx][0];
                }else if(prev=='&'){
                    take=dp[idx][st[idx]-'a'+1];
                }
                nottake=dp[idx][j];
                dp[idx+1][j]=max(take,nottake);
            }
        }
        cout<<n-dp[n][0]<<endl;
    }
}