#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>segtree;
void build(int idx,int l,int r,vector<int>&arr){
    if(l==r){
        segtree[idx]=arr[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(2*idx+1,l,mid,arr);
    build(2*idx+2,mid+1,r,arr);
    segtree[idx]=__gcd(segtree[2*idx+1],segtree[2*idx+2]);
}
int f(int start,int end,int idx,int l,int r){
    if(start>r||end<l){
        return 0;
    }
    int mid=l+(r-l)/2;
    if(l>=start&&r<=end){
        return segtree[idx];
    }
    return (__gcd(f(start,end,2*idx+1,l,mid),f(start,end,2*idx+2,mid+1,r)));
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,vector<int>>pos;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pos[arr[i]].push_back(i);
    }
    int t;
    cin>>t;
    segtree.resize(4*n);
    build(0,0,n-1,arr);
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans=f(l-1,r-1,0,0,n-1);
        if(pos.count(ans)==0){
            cout<<r-l+1<<endl;
            continue;
        }
        auto&v=pos[ans];
        int cnt=upper_bound(v.begin(),v.end(),r-1)-lower_bound(v.begin(),v.end(),l-1);
        cout<<r-l+1-cnt<<endl;
    }
    return 0;
}