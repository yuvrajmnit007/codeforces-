#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>vec;
        int ans=0;
        for(int i=0;i<n;i++){
            vec.push_back(arr[i]);
            sort(vec.rbegin(),vec.rend());
            int sum=0;
            for(int j=0;j<vec.size();j+=2){
                sum+=vec[j];
            }
            int p=vec.size();
            if(sum<=k){
                ans=max(ans,p);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}