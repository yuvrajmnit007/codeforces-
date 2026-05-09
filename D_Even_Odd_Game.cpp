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
        vector<int>arr(n),even,odd;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2){
                odd.push_back(arr[i]);
            }else{
                even.push_back(arr[i]);
            }
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.rbegin(),even.rend());
        int alice=0,bob=0;
        
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