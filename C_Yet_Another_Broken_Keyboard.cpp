#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<char>a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        vector<int>help(26,0);
        for(int i=0;i<m;i++){
            help[a[i]-'a']++;
        }
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(help[s[i]-'a']>0){
                count++;
            }else{
                ans+=(count*(count+1))/2;
                count=0;
            }
        }
        cout<<ans+(count*(count+1))/2<<endl;
    }
    return 0;
}