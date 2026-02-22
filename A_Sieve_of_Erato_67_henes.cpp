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
        bool ans=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==67)ans=true;
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}