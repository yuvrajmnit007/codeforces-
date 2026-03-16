#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int ans=1e18;
        int p=n;
        int count=0;
        int r=k;
        if(k==1){
            r=k+1;
            count++;
        }
        while(p>0){
            p=p/r;
            count++;
        }
        ans=min(ans,count);
        for(int j=1;j<=count;j++){
            int p=n;
            int m=k+j;
            int count1=j;
            while(p>0){
                p=p/m;
                count1++;
            }
            ans=min(ans,count1);
        }
        cout<<ans<<endl;
    }
    return 0;
}