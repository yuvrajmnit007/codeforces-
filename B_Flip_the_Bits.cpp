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
        string s1,s2;
        cin>>s1>>s2;
        int i=0;
        for(i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                break;
            }
        }
        while(i<n){
            if(s1[i]!=s2[i]){
                s1[i]=s2[i];
                i++;  
            }else{
                break;
            }
        }
        bool ans=true;
        for(i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                cout<<"NO"<<endl;
                ans=false;
                break;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}