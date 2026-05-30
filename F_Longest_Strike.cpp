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
        map<int,int>mp;
        set<int>st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second>=k)st.insert(it.first);
        }
        int l=-1,r=-1;
        int sum1=0;
        auto it=st.begin();
        while(it!=st.end()){
            int start=*it;
            int end=start;
            auto jt=next(it);
            while(jt!=st.end()&&*jt==end+1){
                end=*jt;
                jt++;
            }
            if(sum1<end-start+1){
                sum1=end-start+1;
                l=start;
                r=end;
            }
            it=jt;
        }
        if(l==-1){
            cout<<-1<<endl;
            continue;
        }
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}