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
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            if(arr[i]!=arr[j]){
                ans++;
            }
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}