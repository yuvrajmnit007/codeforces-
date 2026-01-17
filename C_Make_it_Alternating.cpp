#include<bits/stdc++.h>
using namespace std;
#define int long long
int MOD=998244353;
signed main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        vector<int>pos;
        int i=0;
        while(i<st.size()){
            int count=1;
            while(st[i]==st[i+1]&&i+1<st.size()){
                count++;
                i++;
            }
            pos.push_back(count);
            i++;
        }
        cout<<st.size()-pos.size()<<" ";
        int ans=1;
        for(int i=0;i<pos.size();i++){
            ans=(ans*pos[i])%MOD;
        }
        for(int i=1;i<=st.size()-pos.size();i++){
            ans=(ans*i)%MOD;
        }
        cout<<ans%MOD<<endl;
    }
    return 0;
}