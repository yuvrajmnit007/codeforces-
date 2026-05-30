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
        int sum=0;
        int mn=1e18;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            mn=min({mn,sum/(i+1)});
            cout<<mn<<" ";
        }
        cout<<endl;
    }
    return 0;
}