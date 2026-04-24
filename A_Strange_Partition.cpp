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
        int sum=0;
        int mn=0;
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            mx+=arr[i]/k;
            if(arr[i]%k!=0){
                mx++;
            }
        }
        mn=sum/k;
        if(sum%k!=0)mn++;
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}