#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>sum(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                sum[i]=arr[i];
            }else{
                sum[i]=sum[i-1]+arr[i];
            }
        }
        int m;
        cin>>m;
        while(m--){
            int x;
            cin>>x;
            int p=lower_bound(sum.begin(),sum.end(),x)-sum.begin();
            cout<<p+1<<endl;
        }
    }
    return 0;
}