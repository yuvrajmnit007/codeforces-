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
    segtree[idx]=min(segtree[2*idx+1],segtree[2*idx+2]);
}
int f(int start,int end,int idx,int l, int r){
    int mid=l+(r-l)/2;
    if(start>r||end<l){
        return 1e18;
    }
    if(l>=start&&r<=end){
        return segtree[idx];
    }
    return min(f(start,end,2*idx+1,l,mid),f(start,end,2*idx+2,mid+1,r));
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        segtree.resize(4*n,1e18);
        build(0,0,n-1,arr);
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<f(l,r,0,0,n-1)<<endl;
        }
    }
    return 0;
}