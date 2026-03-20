#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1e18;
    int count=1;
    int prev=arr[0];
    for(int i=1;i<n;i++){
        if(prev<arr[i]){
            count++;
            prev=arr[i];
        }else{
            ans=max(ans,count);
            count=1;
            prev=arr[i];
        }
    }
    ans=max(ans,count);
    cout<<ans<<endl;
    return 0;
}