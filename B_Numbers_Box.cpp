#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));
        int count =0;
        int sum=0;
        int mn=1e18;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                sum+=abs(arr[i][j]);
                mn=min(mn,abs(arr[i][j]));
                if(arr[i][j]<0){
                    count++;
                }
            }
        }
        if(count%2==0){
            cout<<sum<<endl;
        }else{
            cout<<sum-2*mn<<endl;
        }
    }
    return 0;
}