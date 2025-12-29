#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,k; 
    cin>>n>>k;
    ll arr[n];
    ll arr1[n];
    ll sum=0LL;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>arr1[i];
    ll ans=0LL;
    ll help=0LL;
    for(int i=0;i<min(n,k);i++){
        sum+=arr[i];
        help=max(help,arr1[i]);
        ans=max(ans,sum+(k-i-1)*help);
    }
    cout<<ans<<endl;
}
    return 0;
}