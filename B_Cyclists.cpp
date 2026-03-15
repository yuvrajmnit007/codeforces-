#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>b=arr;
        int ans=0;
        if(p>k){
            int help1=0,help2=0;
            sort(b.begin(),b.begin()+p-1);
            for(int i=0;i<p-k;i++){
                help1+=b[i];
            }
            if(help1+arr[p-1]<=m){
                ans++;
                m-=(help1+arr[p-1]);
                b=arr;
                b.erase(b.begin()+p-1);
                sort(b.begin(),b.end());
            }
            for(int i=0;i<n-k;i++){
                help2+=b[i];
            }
            help2+=arr[p-1];
            if(help2>0){
                ans+=m/help2;
            }
        }else{
            if(m>=arr[p-1]){
                int help2=0;
                ans++;
                m-=arr[p-1];
                b=arr;
                b.erase(b.begin()+p-1);
                sort(b.begin(),b.end());
                for(int i=0;i<n-k;i++){
                    help2+=b[i];
                }
                help2+=arr[p-1];
                if(help2>0){
                    ans+=m/help2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}