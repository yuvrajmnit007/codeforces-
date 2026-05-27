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
        vector<int>arr(n+1);
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pre[i]=arr[i]+pre[i-1];
        }
        int mn=0,mx=0;
        for(int i=1;i<=n;i++){
            mn=min(mn,i*i-i-pre[i-1]);
            mx=max(mx,i*i+i-pre[i]-mn);
        }
        cout<<pre[n]+mx<<endl;
    }
    return 0;
}