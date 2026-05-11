#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int temp=(i+1)*arr[i]-pre[i]+(pre[n-1]-pre[i])-(n-i-1)*arr[i];
            ans[i]=temp;
        }
        int mn=1e18;
        for(int i=0;i<n;i++){
            mn=min(mn,ans[i]);
        }
        for(int i=0;i<n;i++){
            if(ans[i]==mn){
                cout<<arr[i]<<endl;
                break;
            } 
        }
    }
    return 0;
}