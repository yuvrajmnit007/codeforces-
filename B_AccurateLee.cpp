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
        string s="";
        int i=0;
        while(i<n&&st[i]=='0'){
            s+='0';
            i++;
        }
        int j=n-1;
        string s1="";
        while(j>=0&&st[j]=='1'){
            s1+='1';
            j--;
        }
        if(i<j){
            s+='0';
        }
        s+=s1;
        cout<<s<<endl;
    }
    return 0;
}