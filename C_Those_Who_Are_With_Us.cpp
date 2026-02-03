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
        int mx=-1e18;
        vector<vector<int>>arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                mx=max(mx,arr[i][j]);
            }
        }
        int help=0;
        vector<int>r(n,0),c(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==mx){
                    help++;
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==mx){
                    if(r[i]+c[j]-1==help){
                        count=1;
                    }
                }else{
                    if(r[i]+c[j]==help){
                        count=1;
                    }
                }
            }
        }
        cout<<mx-count<<endl;
    }
    return 0;
}