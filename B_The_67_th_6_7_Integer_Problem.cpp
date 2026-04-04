#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        vector<int>arr(7);
        int mx=-1e9;
        int sum=0;
        int val;
        for(int i=0;i<7;i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
            sum+=arr[i];
        }
        cout<<-sum+2*mx<<endl;
    }
    return 0;
}