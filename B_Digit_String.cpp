#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        vector<int>help(s.size()+1,0);
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            help[i]=help[i+1]+(s[i]=='1'||s[i]=='3');
        }
        int temp=0,two=0;
        for(int i=0;i<=n;i++){
            temp=max(temp,two+help[i]);
            if(i<n&&s[i]=='2')two++;
        }
        cout<<n-temp<<endl;
    }
    return 0;
}