#include <bits/stdc++.h>
using namespace std;
#define int double
void inverseMatrix(vector<vector<int>>&a) {
    int n=a.size();
    vector<vector<int>>help(n,vector<int>(n,0));
    for(int i =0;i<n;i++)
        help[i][i]=1;
    for(int i=0;i<n;i++) {
        int pivot=a[i][i];
        for (int j=0;j<n;j++) {
            a[i][j]/=pivot;
            help[i][j]/ pivot;
        }
        for (int k=0;k<n;k++) {
            if (k!=i) {
                int factor=a[k][i];
                for (int j=0;j<n;j++) {
                    a[k][j]-=factor*a[i][j];
                    help[k][j]-=factor*help[i][j];
                }
            }
        }
    }
    a = help;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>mat1(n);
        for(int i=0;i<n;i++){
            cin>>mat1[i];
        }
        vector<vector<int>>mat(n,vector<int>(n));
        for(int i=0;i<n;i++){
            mat[0][i]=i;
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                mat[j][i]=abs(mat[j-1][i]-1);
            }
        }
        inverseMatrix(mat);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=mat[j][i]*mat1[j];
            }
            ans[i]=temp;
        }
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}