#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int,int>>segtree;
void build(int idx,int l,int r,vector<int>&a,vector<int>&b){
    int mid=l+(r-l)/2;
    if(l==r){
        segtree[idx].first=a[l];
        segtree[idx].second=b[l];
        return;
    }
    build(2*idx+1,l,mid,a,b);
    build(2*idx+2,mid+1,r,a,b);
    segtree[idx].first=max(segtree[2*idx+1].first,segtree[2*idx+2].first);
    segtree[idx].second=min(segtree[2*idx+1].second,segtree[2*idx+2].second);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    segtree.resize(4*n,{1e18,1e18});
    build(0,0,n-1,a,b);
    int count=0;
    for(auto it:segtree){
        if(it.first==it.second&&it.first!=1e18){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}