#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(string s) {
    int n=s.size();
    vector<int>help(3,0);
    int ans=1e18;
    int j=0;
    for(int i=0;i<n;i++){
        help[s[i]-'1']++;
        while(help[0]>0&&help[1]>0&&help[2]>0){
            ans=min(ans,(i-j+1));
            help[s[j]-'1']--;
            j++;
        }
    }
    if(ans==1e18)return 0;
    return ans;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        cout<<f(s)<<endl;
    }
    return 0;
}