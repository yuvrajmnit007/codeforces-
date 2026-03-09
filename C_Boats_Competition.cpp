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
        vector<int>a(n);
        unordered_map<int,int>help;
        for(int i=0;i<n;i++){
            cin>>a[i];
            help[a[i]]++;
        }
        int ans=0;
        int l=0;
        while(l<=2*n){
            unordered_map<int,int>mp=help;
            int temp=0;
            for(int i=0;i<=l/2;i++){
                int j=l-i;
                if(i==j){
                    temp+=mp[i]/2;
                }else {
                    temp+=min(mp[i],mp[j]);
                }
            }
            ans=max(ans,temp);
            l++;
        }
        cout<<ans<<endl;
    }
    return 0;
}