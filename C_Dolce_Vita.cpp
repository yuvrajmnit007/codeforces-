#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(k>=pre[i]){
                ans++;
                int temp=(k-pre[i])/(i+1);
                ans+=temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}