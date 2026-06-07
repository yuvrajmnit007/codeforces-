#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>segtree;
vector<int>mx;
vector<int>arr;
void build(int idx,int l,int r){
    if(l==r){
        segtree[idx]=arr[l];
        mx[idx]=arr[l];
        return;
    }
    int mid=(l+r)/2;
    build(2*idx+1,l,mid);
    build(2*idx+2,mid+1,r);
    segtree[idx]=segtree[2*idx+1]+segtree[2*idx+2];
    mx[idx]=max(mx[2*idx+1],mx[2*idx+2]);
}
void update_lazy(int start,int end,int idx,int l,int r,int val){
    if(r<start||l>end||mx[idx]<val) return;
    if(l==r){
        segtree[idx]%=val;
        mx[idx]=segtree[idx];
        return;
    }
    int mid=(l+r)/2;
    update_lazy(start,end,2*idx+1,l,mid,val);
    update_lazy(start,end,2*idx+2,mid+1,r,val);
    segtree[idx]=segtree[2*idx+1]+segtree[2*idx+2];
    mx[idx]=max(mx[2*idx+1],mx[2*idx+2]);
}
void update(int i,int val,int idx,int l,int r){
    if(l==r){
        segtree[idx]=val;
        mx[idx]=val;
        return;
    }
    int mid=(l+r)/2;
    if(i<=mid){
        update(i,val,2*idx+1,l,mid);
    }else{
        update(i,val,2*idx+2,mid+1,r);
    }
    segtree[idx]=segtree[2*idx+1]+segtree[2*idx+2];
    mx[idx]=max(mx[2*idx+1],mx[2*idx+2]);
}
int quary(int start,int end,int idx,int l,int r){
    if(r<start||l>end) return 0;
    if(start<=l&&r<=end){
        return segtree[idx];
    }
    int mid=(l+r)/2;
    return quary(start,end,2*idx+1,l,mid)+quary(start,end,2*idx+2,mid+1,r);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    segtree.resize(4*n);
    mx.resize(4*n);
    build(0,0,n-1);
    while(k--){
        int a;
        cin>>a;
        if(a==1){
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            cout<<quary(l,r,0,0,n-1)<<'\n';
        }
        else if(a==2){
            int l,r,x;
            cin>>l>>r>>x;
            l--;
            r--;
            update_lazy(l,r,0,0,n-1,x);
        }
        else{
            int l,x;
            cin>>l>>x;
            l--;
            update(l,x,0,0,n-1);
        }
    }
    return 0;
}