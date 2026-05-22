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
        vector<pair<int,int>>vec(n+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec[i+1].first=x;
            vec[i+1].second=i+1;
        }
        vec[0].first=-1e18;
        vec[0].second=-1;
        sort(vec.begin(),vec.end());
        vector<int>ans(n+1);
        int i=n;
        int p=1;
        int temp=0;
        ans[0]=0;
        while(i>=2){
            ans[vec[i].second]=p;
            ans[vec[i-1].second]=-p;
            temp+=2*(p*vec[i].first+p*vec[i-1].first);
            p++;
            i-=2;
        }
        if(i==1){
            ans[vec[i].second]=p;
            temp+=2*p*vec[i].first;
        }
        cout<<temp<<endl;
        cout<<0<<" ";
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}