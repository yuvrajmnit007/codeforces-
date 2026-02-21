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
        string st;
        cin>>st;
        int ans=1e18;
        for(int i=0;i<n;i++){
            vector<int>help(3,0);
            help[st[i]-'a']++;
            for(int j=i+1;j<min(n,i+7);j++){
                help[st[j]-'a']++;
                if(help[0]>help[1]&&help[0]>help[2]){
                    ans=min(ans,j-i+1);
                }
            }
        }
        if(ans!=1e18)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}