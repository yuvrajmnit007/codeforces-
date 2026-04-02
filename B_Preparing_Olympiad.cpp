#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=2;i<=1<<n;i++){
        int mn=1e18;
        int mx=-1e18;
        int temp=i;
        int sum=0;
        for(int j=0;j<n;j++){
            if(temp%2){
                mn=min(mn,arr[j]);
                mx=max(arr[j],mx);
                sum+=arr[j];
            }
            temp/=2;
        }
        if(sum<=r&&sum>=l&&(mx-mn)>=x){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}