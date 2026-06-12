#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b,x;
        cin>>a>>b>>x;
        if(x==1){
            cout<<abs(a-b)<<endl;
            continue;
        }
        vector<pair<int,int>>A,B;
        int cur=a;
        int cnt=0;
        while(true){
            A.push_back({cur,cnt});
            if(cur==0)break;
            cur/=x;
            cnt++;
        }
        cur=b;
        cnt=0;
        while(true){
            B.push_back({cur,cnt});
            if(cur==0)break;
            cur/=x;
            cnt++;
        }
        int ans=abs(a-b);
        for(int i=0;i<A.size();i++) {
            for(int j=0;j<B.size();j++) {
                ans=min(ans,A[i].second+B[j].second+abs(A[i].first-B[j].first));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}