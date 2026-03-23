#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(string s, string b) {
    for (int i=0;i+s.size()<= b.size();i++) {
        string st=b.substr(i,s.size());
        if (st==s)return true;
    }
    return false;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        int ans=1e18;
        for(int i = 0;i<n;i++){
            for(int j=i;j<n;j++){
                string s=a.substr(i,j-i+1); 
                if(check(s,b)){
                    ans=min(ans,n+m-2*(int)s.size());
                }
            }
        }
        if (ans==1e18)ans=n+m;
        cout<<ans<<endl;
    }
    return 0;
}