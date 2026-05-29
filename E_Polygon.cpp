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
        vector<string>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]=='1'&&!(i+1==n||j+1==n||arr[i+1][j]=='1'||arr[i][j+1]=='1')){
                    ans=false;
                    break;
                }
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}