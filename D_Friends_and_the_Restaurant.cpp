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
        vector<int>arr(n),arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        vector<int>vec;
        for(int i=0;i<n;i++){
            vec.push_back(arr1[i]-arr[i]);
        }
        sort(vec.begin(),vec.end());
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            if(vec[i]+vec[j]>=0){
                ans++;
                i++;
                j--;
            }else {
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}