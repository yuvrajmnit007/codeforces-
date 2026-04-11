#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n),arr1(m);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<m;j++){
            cin>>arr1[j];
        }
        vector<int>vec=arr1;
        sort(vec.begin(),vec.end());
        int i=0;
        int j=0;
        while(j<n&&i<m){
            if(vec[i]>cost)
        }
    }
    return 0;
}