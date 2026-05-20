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
        sort(arr.begin(),arr.end());
        int sz=arr[0];
        int ans=0;
        int i=0;
        int temp=0,mx=0;
        while(i<n){
            mx=arr[i];
            temp++;
            if(temp>=mx){
                ans++;
                temp=0;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}