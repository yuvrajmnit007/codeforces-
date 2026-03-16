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
        int ans=0;
        int help=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>help){
                ans++;
                help=arr[i];
            }else if(arr[i]==help){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}