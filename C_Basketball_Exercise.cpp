#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int>a(t),b(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        cin>>b[i];
    }
    vector<vector<int>>dp(t+1,vector<int>(2,0));
    dp[0][0]=b[0];
    dp[0][1]=a[0];
    for(int idx=1;idx<t;idx++){
        for(int prev=0;prev<=1;prev++){
            int nottake =dp[idx-1][prev];
            int take=0;
            if(prev==1){
                take=a[idx]+dp[idx-1][0];
            }
            else{
                take=b[idx]+dp[idx-1][1];
            }
            dp[idx][prev]=max(take,nottake);
            }
    }
    cout<<max(dp[t-1][0],dp[t-1][1])<<endl;
    return 0;
}