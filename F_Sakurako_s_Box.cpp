#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
int f(int a,int b){
    if(b==0)return 1;
    if(b%2==1)return (a*f(a,b-1))%MOD;
    return f((a*a)%MOD,b/2);
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
            suf[i]=(suf[i+1]+arr[i])%MOD;
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            int temp=(suf[i+1]*arr[i])%MOD;
            ans=(ans+temp)%MOD;
        }
        int k=(n*(n-1)/2)%MOD;
        int r=(f(k,MOD-2))%MOD;
        cout<<(ans*r)%MOD<<endl;
    }
    return 0;
}