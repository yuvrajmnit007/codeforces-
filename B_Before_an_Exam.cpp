#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int mn=0,mx=0;
    vector<pair<int,int>>vec;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        mn+=a;
        mx+=b;
        ans[i]=a;
        vec.push_back({a,b});
    }
    if(k>=mn&&k<=mx){
        cout<<"YES"<<endl;
        k-=mn;
        for(int i=0;i<n;i++){
            int temp=min(vec[i].second-vec[i].first,k);
            ans[i]+=temp;
            k-=temp;
            if(k==0)break;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}