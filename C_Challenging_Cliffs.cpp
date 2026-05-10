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
        int a,b;
        int j;
        int mn=1e18;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<mn){
                j=i;
                mn=arr[i]-arr[i-1];
            }
        }
        if(n==2){
            cout<<arr[0]<<" "<<arr[1]<<endl;
            continue;
        }
        for(int i=j;i<n;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<j;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}