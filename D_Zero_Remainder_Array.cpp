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
        map<int,int>help;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%k!=0)help[k-arr[i]%k]++;
            else help[0]++;
        }
        int ans=0;
        for(int i=1;i<k;i++){
            if(help[i]>0){
                ans=max((help[i]-1)*k+i,ans);
            }
        }
        if(ans!=0)cout<<ans+1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}