#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
            int n, m, k;
            cin >>n>>m>>k;
            int left=k-1;   
            int right=n-k;     
            int ans =1;  
            for(int i=1;i<=n;i++){
                int days=2*i-1;
                if(days>m)break;
                int rem=m-days;  
                if(i<=left){
                    int help=min(i,right);
                    help=min(help,rem);
                    ans=max(ans,i+help+1);
                }
                if(i<=right){
                    int help=min(i,left);
                    help=min(help,rem);
                    ans=max(ans,i+help+1);
                }
            }
            cout<<ans<<endl;
        }
    return 0;
}
