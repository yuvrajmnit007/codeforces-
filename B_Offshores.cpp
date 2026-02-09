#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]/x)*y;
        }
        for(int i=0;i<n;i++){
            mx=max(mx,sum+arr[i]-(arr[i]/x)*y);
        }
        cout<<mx<<endl;
    }
    return 0;
}