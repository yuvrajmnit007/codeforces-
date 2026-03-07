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
        string s1="",s2="";
        for(int i=0;i<n;i++){
            if(s[i]=='2'){
                s1+='1';
                s2+='1';
            }
            if(s[i]=='1'){
                s1+='1';
                s2+='0';
                s2+=s.substr(i+1);
                break;
            }
            if(s[i]=='0'){
                s1+='0';
                s2+='0';
            }
        }
        if(s1.size()<n){
            for(int i=s1.size();i<n;i++){
                s1+='0';
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
    return 0;
}