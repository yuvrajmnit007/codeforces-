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
        int val=(1<<31)-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=i){
                val&=arr[i];
            }
        }
        cout<<val<<endl;
    }
    return 0;
}