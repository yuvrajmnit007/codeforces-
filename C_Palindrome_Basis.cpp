#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD = 1e9 + 7;
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
    vector<int> coins;
    for (int i=1;i<=40000;i++) {
        if(isPalindrome(i)){
            coins.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int amount;
        cin>>amount;
        vector<int>dp(amount+1,0);
        dp[0]=1;
        for (int coin:coins) {
            if (coin>amount) break;
            for (int sum=coin;sum<=amount;sum++) {
                dp[sum]=(dp[sum]+dp[sum-coin])%MOD;
            }
        }
        cout<<dp[amount]<<endl;
    }
    return 0;
}
