#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int l=0,h=2e10;
        int ans;
        while(l<=h){
            int mid=l+(h-l)/2;
            int temp=mid*(mid-1)/2;
            if(temp>n){
                h=mid-1;
            }else{
                ans=mid+n-temp;
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}