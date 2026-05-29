#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>odd,even;
        int mx=-1e18;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mx=max(mx,x);
            if(i%2)odd.push_back(x);
            else even.push_back(x);
        }
        if(mx<0){
            cout<<mx<<endl;
            continue;
        }
        int ans1=0,ans2=0;
        for(int i=0;i<odd.size();i++){
            ans1+=max(0LL,odd[i]);
        }
        for(int i=0;i<even.size();i++){
            ans2+=max(0LL,even[i]);
        }
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}