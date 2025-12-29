#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; 
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll l = 0;
        ll r = 1e9;
        ll ans = -1;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            ll sum = 0;  
            for(ll i = 0; i < n; i++){
                sum += (arr[i] + 2*mid) * (arr[i] + 2*mid);
                if(sum > x) break;  
            }
            if(sum <= x){
                ans = mid;
                l = mid + 1;   
            } else {
                r = mid - 1;  
            }
        }
        cout << ans << endl;
    }
    return 0;
}
