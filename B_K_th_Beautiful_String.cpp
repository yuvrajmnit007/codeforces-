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
        int p=sqrt(2*k);
        if(p*(p+1)>=2*k){
            p=p-1;
        }
        string ans="";
        for(int i=0;i<n-(p+1)-1;i++){
            ans+="a";
        }
        int x=k-p*(p+1)/2;
        for(int i=0;i<p-x+3;i++){
            if(i==0||i==p-x+2){
                ans+="b";
            }else ans+="a";
        }
        for(int i=0;i<x-1;i++){
            ans+="a";
        }
        cout<<ans<<endl;
    }
    return 0;
}