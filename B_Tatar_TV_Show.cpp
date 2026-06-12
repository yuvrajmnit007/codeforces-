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
        string st;
        cin>>st;
        for(int i=0;i<n-k;i++){
            if(st[i]=='1'){
                st[i]='0';
                st[i+k]=st[i+k]=='0'?'1':'0';
            }
        }
        bool ans=true;
        for(int i=0;i<n;i++){
            if(st[i]=='1'){
                ans=false;
                break;;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}