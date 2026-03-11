#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0;
        int l=0,r=1e10;
        int k=m;
        while(l<=r){
            int mid=l+(r-l)/2;
            for(int i=0;i<n;i++){
                long long need = max(0LL, mid*a[i]-b[i]);
                k-=need;
                if(k<0) break;
            }
            if(k<0){
                r=mid-1;
            }else{
                ans=mid;
                l=mid+1;
            }
            k=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}