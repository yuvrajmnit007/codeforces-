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
        vector<int>arr(n+1);
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pre[i]=pre[i-1]+arr[i];
        }
        while(k--){
            int a,b,c;
            cin>>a>>b>>c;
            int k=(b-a+1)*c+pre[n]-(pre[b]-pre[a-1]);
            if(k%2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}