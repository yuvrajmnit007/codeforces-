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
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%k!=0){
                help[k-arr[i]%k]++;
                mx=max(mx,help[k-arr[i]%k]);
            }
        }
        int ans=0;
        for(auto it:help){
            if(it.second==mx){
                ans=k*(mx-1)+it.first+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}