#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=1;i<=2*n;i++){
            int p=0,q=1;
            int temp=0;
            while(p<n){
                if(a[p]+a[q]==i){
                    temp++;
                    p++;
                    q++;
                }else if(a[p]+a[q]<i){
                    p++;
                }else{
                    q++;
                }
            }
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}