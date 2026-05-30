#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,x,s;
        cin>>n>>x>>s;
        string st;
        cin>>st;
        int ans=0,mpty=x,seats=0,temp=0;
        for(int i=0;i<n;i++){
            char c=st[i];
            if(c=='I'){
                if(mpty>0){
                    mpty--;
                    ans++;
                    seats+=(s-1);
                }
            }else if(c=='E'){
                if(seats>0){
                    seats--;
                    ans++;
                }else if(mpty>0&&temp>0){
                    mpty--;
                    ans++;
                    temp--;
                    seats+=(s-1);
                }
            }else if(c=='A'){
                if(seats>0){
                    seats--;
                    ans++;
                    temp++;
                }else if(mpty>0){
                    mpty--;
                    seats+=(s-1);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}