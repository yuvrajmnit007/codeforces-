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
        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            int temp=arr[i]/ans[ans.size()-1];
            int val1=temp1*ans[ans.size()-1];
            int val2=(temp1+1)*ans[ans.size()-1];
            if(abs(val2-arr[i])<=abs(val1-arr[i])){
                
            }
        }
    }
    return 0;
}