#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd (ll x, ll y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll ans;
        ll p = x*y/gcd(x,y);
        ll a=n/x-n/p;
        ll b=n/y-n/p;
        ans=n*(n+1)/2-(n-a)*(n-a+1)/2-b*(b+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}