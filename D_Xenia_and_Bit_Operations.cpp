#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>segtree;
void build(int turn,int idx,int l,int r,vector<int>&arr){
    if(l==r){
        segtree[idx]=arr[l];
        return;
    }
    int mid=l+(r-l)/2;
    build(1-turn,2*idx+1,l,mid,arr);
    build(1-turn,2*idx+2,mid+1,r,arr);
    if(turn==0){
        segtree[idx]=(segtree[2*idx+1]|segtree[2*idx+2]);
    }else{
        segtree[idx]=(segtree[2*idx+1]^segtree[2*idx+2]);
    }
}
void update(int idx,int val,int turn,int i,int l,int r){
    if(l==r){
        segtree[i]=val;
        return;
    }
    int mid=l+(r-l)/2;
    if(idx<=mid){
        update(idx,val,1-turn,2*i+1,l,mid);
    }else{
        update(idx,val,1-turn,2*i+2,mid+1,r);
    }
    if(turn==0){
        segtree[i]=(segtree[2*i+1]|segtree[2*i+2]);
    }else{
        segtree[i]=(segtree[2*i+1]^segtree[2*i+2]);
    }
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int p=1<<n;
        vector<int>arr(p);
        segtree.resize(4*p);
        for(int i=0;i<p;i++){
            cin>>arr[i];
        }
        build(1-n%2,0,0,p-1,arr);
        while(m--){
            int idx,val;
            cin>>idx>>val;
            update(idx-1,val,1-n%2,0,0,p-1);
            cout<<segtree[0]<<endl;
        }
    }
    return 0;
}