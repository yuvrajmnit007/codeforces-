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
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int ans=0;
        vector<int>help;
        for(int i=1;i<=n;i++){
            if(arr[i]>=i)continue;
            ans+=lower_bound(help.begin(),help.end(),arr[i])-help.begin();
            help.push_back(i);
        }
        cout<<ans<<endl;
    }
    return 0;
}