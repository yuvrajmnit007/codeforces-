#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int>help(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            help[a[i]]++;
        }
        vector<int>help1(n+1,1e18);
        for(int i=1;i<=n;i++){
            if(help[i]>0){
                help1[i]=1;
            }
        }
        for(int i=2;i<=n;i++){
            if(help[i]==0)continue;
            for(int j=i;j<=n;j+=i){
                if(help1[j/i]!=1e18){
                    help1[j]=min(help1[j],1+help1[j/i]);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(help1[i]==1e18){
                cout<<-1<<" ";
            }
            else{
                cout<<help1[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
