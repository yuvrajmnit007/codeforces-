#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>>m(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n/2;i++){
           for(int j=0;j<(n+1)/2;j++){
                int p1 = m[i][j] - '0';
                int p2 = m[j][n - 1 - i] - '0';
                int p3 = m[n - 1 - i][n - 1 - j] - '0';
                int p4 = m[n - 1 - j][i] - '0';
                int sum = p1 + p2 + p3 + p4;
                ans+=min(sum,4-sum);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}