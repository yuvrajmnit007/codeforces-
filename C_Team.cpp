#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string ans="";
        for(int i=0;i<n;i++){
            ans+='0';
            if(i!=n-1)ans+='1';
        }
        m=m-n+1;
        if(m<0){
            cout<<-1<<endl;
        }else{
            string ans1="";
            int j=0;
            int sz=2*n-1;
            int i=0;
            while(i<m){
                ans1+='1';
                if(j>=sz&&i==m-3){
                    ans1='1'+ans1;
                    i++;
                }
                if(j>=sz&&i<m-3){
                    cout<<-1<<endl;
                    return 0;
                }
                if(j<sz){
                    ans1+=ans[j];
                    j++;
                }
                if(j<sz){
                    ans1+=ans[j];
                    j++;
                }
                i++;
            }
            while(j<sz){
                ans1+=ans[j];
                j++;
            }
            cout<<ans1<<endl;
        }
    }
    return 0;
}