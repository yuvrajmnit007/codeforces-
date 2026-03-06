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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b=a;
        sort(b.begin(),b.end());
        vector<int>help1(n+1,0),help2(n+1,0);
        help1[0]==0;
        help2[0]=0;
        for(int i=1;i<=n;i++){
            help1[i]=help1[i-1]+a[i-1];
            help2[i]=help2[i-1]+b[i-1];
        }
        int m;
        cin>>m;
        while(m--){
            int p,x,y;
            cin>>p>>x>>y;
            if(p==1){
                cout<<help1[y]-help1[x-1]<<endl;
            }else{
                cout<<help2[y]-help2[x-1]<<endl;
            }
        }
    }
    return 0;
}