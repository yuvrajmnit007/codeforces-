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
        int alice=0,bob=0;
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(arr[i]%2==0){
                    alice+=arr[i];
                }
            }else{
                if(arr[i]%2){
                    bob+=arr[i];
                }
            }
        }
        if(alice==bob){
            cout<<"Tie"<<endl;
        }else if(alice>bob){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}