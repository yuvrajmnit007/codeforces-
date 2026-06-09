#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        double r,s,p;
        cin>>r>>s>>p;
        vector<vector<vector<double>>>dp(101,vector<vector<double>>(101,vector<double>(101,0.0)));
        dp[r][s][p]=1;
        for(int i=r;i>=0;i--){
            for(int j=s;j>=0;j--){
                for(int k=p;k>=0;k--){
                    if(i==0&&j==0)continue;
                    if(p==0&&j==0)continue;
                    if(p==0&&i==0)continue;
                    double curr=dp[i][j][k];
                    if(curr==0.0)continue;
                    double m=i*j+j*k+k*i;
                    if(m==0.0)continue;
                    if(i>0&&j>0){
                        dp[i][j-1][k]+=curr*(i*j)/m;
                    }
                    if(j>0&&k>0){
                        dp[i][j][k-1]+=curr*(k*j)/m;
                    }
                    if(k>0&&i>0){
                        dp[i-1][j][k]+=curr*(i*k)/m;
                    }
                }
            }
        }
        double a=0,b=0,c=0;
        for(int i=0;i<=r;i++){
            a+=dp[i][0][0];
        }
        for(int i=0;i<=s;i++){
            b+=dp[0][i][0];
        }
        for(int i=0;i<=p;i++){
            c+=dp[0][0][i];
        }
        cout<<fixed<<setprecision(12)<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}