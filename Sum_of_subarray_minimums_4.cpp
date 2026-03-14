#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD=1e9+7;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum=0; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<n;i++){
            int mn=arr[i];
            for(int j=i+1;j<n;j++){
                mn=min(arr[j],mn);
                sum+=mn;
            }
            sum=sum%MOD;
        }
        cout<<sum<<endl;
    }
    return 0;
}