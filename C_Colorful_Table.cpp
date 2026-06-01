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
        vector<int>arr(n);
        vector<int>pre(k+1,n),suf(k+1,-1);
        vector<bool>present(k+1,false);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            present[arr[i]]=true;
            pre[arr[i]]=min(pre[arr[i]],i);
            suf[arr[i]]=max(suf[arr[i]],i);
        }
        int a=n,b=-1;
        vector<int>vec(k+1,0);
        for(int i=k;i>=1;i--){
            a=min(a,pre[i]);
            b=max(b,suf[i]);
            if(present[i]){
                vec[i]=2*(b-a+1);
            }
        }
        for(int i=1;i<=k;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}