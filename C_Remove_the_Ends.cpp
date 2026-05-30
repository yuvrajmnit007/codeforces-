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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>pre(n,0),suf(n,0);
        if(arr[0]>0){
            pre[0]=arr[0];
        }
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1];
            if(arr[i]>0){
                pre[i]+=arr[i];
            }
        }
        if(arr[n-1]<0){
            suf[n-1]=-arr[n-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1];
            if(arr[i]<0){
                suf[i]-=arr[i];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,pre[i]+suf[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}