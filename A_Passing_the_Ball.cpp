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
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                count++;
                break;
            }else count++;
        }
        cout<<count<<endl;
    }
    return 0;
}