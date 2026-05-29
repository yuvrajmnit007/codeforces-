#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        string st;
        cin>>st;
        int i=0;
        int n=st.size();
        int ans=0;
        while(i<n){
            if(st[i]=='1'){
                while(i<n&&st[i]=='1')i++;
                if(i==n){
                    ans+=a;
                    break;
                }else{
                    int j=i;
                    int temp1=0;
                    while(j<n&&st[j]=='0'){
                        temp1++;
                        j++;
                    }
                    if(j==n){
                        ans+=a;
                        break;
                    }else{
                        ans+=min(a,b*temp1);
                    }
                    i=j;
                    continue;
                }
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}