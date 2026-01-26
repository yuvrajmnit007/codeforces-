#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin>>st;
    int n;
    cin>>n;
    int i=st.size();
    vector<int>dp(i+1,0);
    for(int t=2;t<=i;t++){
        if(st[t-1]==st[t-2]){
            dp[t]=1+dp[t-1];
        }else{
            dp[t]=dp[t-1];
        }
    }
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<dp[r]-dp[l]<<endl;
    }
    return 0;
}