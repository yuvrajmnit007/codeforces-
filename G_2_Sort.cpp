#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        int i=0;
        while(i<n){
            int temp=1;
            int j=i+1;
            while(j<n&&2*arr[j]>arr[j-1]){
                temp++;
                j++;
            }
            if(temp>=k+1){
                ans+=(temp-k);
            }
            i=j;
        }
        cout<<ans<<endl;
    }
    return 0;
}