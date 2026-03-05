#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        string st;
        cin>>n>>st;
        vector<int>help(10,0);
        for(int i=0;i<n;i++){
            if(st[i]-'0'==9){
                help[7]++;
                help[3]+=2;
                help[2]++;
            }
            if(st[i]-'0'==8){
                help[7]++;
                help[2]+=3;
            }
            if(st[i]-'0'==6){
                help[5]++;
                help[3]++;
            }
            if(st[i]-'0'==4){
                help[3]++;
                help[2]+=2;
            }
            if(st[i]-'0'==2||st[i]-'0'==3||st[i]-'0'==5||st[i]-'0'==7){
                help[st[i]-'0']++;
            }
        }
        string ans="";
        for(int i=9;i>=0;i--){
            while(help[i]>0){
                ans+=to_string(i);
                help[i]--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}