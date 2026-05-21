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
        int prev=arr[0];
        int k=0;
        for(int i=1;i<n;i++){
            if(arr[i]<prev){
                k=max(k,prev-arr[i]);
            }
            prev=max(prev,arr[i]);
        }
        bool flag=1;
        int ans=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>=ans){
                ans=arr[i];
            }else{
                if(arr[i]+k>=ans){
                    ans=arr[i]+k;
                }else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}