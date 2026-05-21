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
        int i=0,j=n-1;
        while(i<=j&&st[i]==st[j]){
            i++;j--;
        }
        if(i==j||i>j){
            cout<<0<<endl;
            continue;
        }
        char a=st[i],b=st[j];
        int ans=0;
        bool flag=true;
        int p=i,q=j;
        while(i<=j){
            if(st[i]!=st[j]){
                ans++;
                if(st[i]==a){
                    i++;
                }else if(st[j]==a){
                    j--;
                }else{
                    flag=false;
                    break;
                }
            }else{
                i++;j--;
            }
        }
        bool flag1=1;
        int ans1=0;
        while(p<=q){
            if(st[p]!=st[q]){
                ans1++;
                if(st[p]==b){
                    p++;
                }else if(st[q]==b){
                    q--;
                }else{
                    flag1=false;
                    break;
                }
            }else{
                p++;q--;
            }
        }
        if(flag&&flag1){
            cout<<min(ans,ans1)<<endl;
        }else if(flag){
            cout<<ans<<endl;
        }else if(flag1){
            cout<<ans1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}