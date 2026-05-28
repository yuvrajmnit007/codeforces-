#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        string st;
        cin>>st;
        int ans=0;
        int n=st.size();
        for(int i=0;i<n;i++){
            if((st[i]-'0')%4==0)ans++;
        }
        for(int i=st.size()-2;i>=0;i--){
            int a=st[i+1]-'0';
            int b=st[i]-'0';
            int k=10*b+a;
            if(k%4==0){
                ans+=(i+1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}