#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int ans1=(n+x+y-1)/(x+y);
        int ans2;
        if(x*z>=n){
            ans2=(n+x-1)/x;
        }else{
            ans2=z+(n-x*z+x+10*y-1)/(x+10*y);
        }
        cout<<min(ans1,ans2)<<"\n";
    }
    return 0;
}