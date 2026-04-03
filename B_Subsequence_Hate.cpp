#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string st;
        cin>>st;
        int ans=1e18;
        for(int i=0;i<st.size();i++){
            int count1=0,count0=0;
            for(int j=0;j<i;j++){
                if(st[j]=='0'){
                    count0++;
                }else count1++;
            }
            int cnt1,cnt0;
            cnt0=cnt1=0;
            for(int j=i;j<st.size();j++){
                if(st[j]=='0'){
                    cnt0++;
                }else cnt1++;
            }
            ans=min({ans,cnt0+count0,cnt0+count1,count0+cnt1,count1+cnt1});
        }
        cout<<ans<<endl;
    }
    return 0;
}