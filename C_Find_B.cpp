#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n+1);
        vector<int>pre(n+1,0),help(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pre[i]=pre[i-1]+arr[i];
            if(arr[i]==1){
                help[i]=help[i-1]+1;
            }else {
                help[i]=help[i-1];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            if(r-l+help[r]-help[l]<=pre[r]-pre[l]&&r-l>1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}