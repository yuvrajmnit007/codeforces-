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
            if(n>=3){
                cout<<2<<" ";
            }else{
                cout<<n<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}