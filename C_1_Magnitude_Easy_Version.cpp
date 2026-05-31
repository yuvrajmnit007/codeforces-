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
        int mn=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            mn=min(mn,sum);
        }
        cout<<sum-2*mn<<endl;
    }
    return 0;
}