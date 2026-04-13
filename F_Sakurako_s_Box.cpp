#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int f(int a,int b){
    int res=1;
    a%=MOD;
    while(b>0){
        if(b%2==1)res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/= 2;
    }
    return res;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>suf(n,0);
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+arr[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            int temp=(suf[i+1]*arr[i])%MOD;
            ans=(ans+temp)%MOD;
        }
        int k=n*(n-1)/2;
        int r=f(k,MOD-2);
        cout<<(ans*r)%MOD<<endl;
    }
    return 0;
}