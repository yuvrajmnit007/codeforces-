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
        vector<int>ans;
        int j=n-1,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(arr[j]);
                j--;
            }else{
                ans.push_back(arr[k]);
                k++;
            }
        }
        for(int i=n-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}