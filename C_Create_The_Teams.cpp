#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int ans=0;
        int temp=0;
        for(int i=0;i<n;i++){
            temp++;
            if(temp*arr[i]>=x){
                ans++;
                temp=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}