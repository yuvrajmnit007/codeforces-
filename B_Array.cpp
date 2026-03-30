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
        for(int i=0;i<n;i++){
            int ans=0;
            int a=0,b=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    a++;
                }
                if(arr[j]<arr[i]){
                    b++;
                }
            }
            ans=max({ans,a,b});
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}