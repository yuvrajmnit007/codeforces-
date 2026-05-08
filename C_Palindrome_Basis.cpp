#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
bool isPalindrome(int n) {
    int orig=n,rev=0;
    while (n>0) {
        rev=rev*10+(n%10);
        n/=10;
    }
    return orig==rev;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>coins;
    for (int i=1;i<=40000;i++) {
        if(isPalindrome(i)){
            coins.push_back(i);
        }
    }
    vector<int>dp(40001,0);
    dp[0]=1;
    for(int i=0;i<coins.size();i++){
        for(int j=coins[i];j<=40000;j++){
            dp[j]=(dp[j]+dp[j-coins[i]])%MOD;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}
