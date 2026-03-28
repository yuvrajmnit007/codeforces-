#include <bits/stdc++.h>
using namespace std;
#define int long long
// bool f(int r,int c,vector<vector<char>>&arr,int sz){
//     int n=arr.size();
//     int m=arr[0].size();
//     for(int i=r;i<r+sz;i++){
//         for(int j=c;j<c+sz;j++){
//             if(i>=n||j>=m||arr[i][j]=='0')return false;
//         }
//     }
//     return true;
// }
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<m;j++){
                arr[i][j]=s[j]-'0';
            }
        }
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         for(int sz=1;sz<max(n,m);sz++){
        //             if(f(i,j,arr,sz))ans=max(ans,sz);
        //         }
        //     }
        // }
        vector<vector<int>>pre(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                pre[i][j]=arr[i-1][j-1]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
            }
        }
        int ans=1;
        if(pre[n][m]==0){
            cout<<0<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int sz=1;sz<=min(n-i+1,m-j+1);sz++){
                    int area=pre[i+sz-1][j+sz-1]-pre[i-1][j+sz-1]-pre[i+sz-1][j-1]+pre[i-1][j-1];
                    if(area==sz*sz){
                        ans=max(ans,area);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}