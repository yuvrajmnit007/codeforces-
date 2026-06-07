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
        sort(arr.rbegin(),arr.rend());
        bool ans=true;
        if(n<2)ans=false;
        for(int i=2;i<n;i++){
            if(arr[i]!=arr[i-2]%arr[i-1]){
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}