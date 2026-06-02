#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>segtree;
vector<int>lazy;
void buildsegtree(vector<int>&arr,int idx,int low,int high){
    if(low==high){
        segtree[idx]=arr[low];
        return;
    }
    int mid=(low+high)/2;
    buildsegtree(arr,2*idx+1,low,mid);
    buildsegtree(arr,2*idx+2,mid+1,high);
    segtree[idx]=min(segtree[2*idx+1],segtree[2*idx+2]);
}
int quary(int start,int end,int idx,int l,int r){
    if(lazy[idx]!=0){
        segtree[idx]+=lazy[idx];
        if(l!=r){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+2]+=lazy[idx];
        }
        lazy[idx]=0;
    }
    if(start>r || end<l)return 1e18;
    if(start<=l && r<=end)return segtree[idx];
    int mid=(l+r)/2;
    int val1=quary(start,end,2*idx+1,l,mid);
    int val2=quary(start,end,2*idx+2,mid+1,r);
    return min(val1,val2);
}
void update(int start,int end,int idx,int l,int r, int val){
    if(lazy[idx]!=0){
        segtree[idx]+=(r-l+1)*lazy[idx];
        if(l!=r){
            lazy[2*idx+1]+=lazy[idx];
            lazy[2*idx+2]+=lazy[idx];
        }
        lazy[idx]=0;
    }
    if(start>r || end<l)return;
    if(start<=l && r<=end){
        segtree[idx]+=(r-l+1)*val;
        if(l!=r){
            lazy[2*idx+1]+=val;
            lazy[2*idx+2]+=val;
        }
        return;
    }
    int mid=(l+r)/2;
    update(start,end,2*idx+1,l,mid,val);
    update(start,end,2*idx+2,mid+1,r,val);
    segtree[idx]=min(segtree[2*idx+1],segtree[2*idx+2]);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    segtree.resize(4*n);
    lazy.resize(4*n,0);
    int q;
    cin>>q;
    buildsegtree(arr,0,0,n-1);
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<int>v;
        int x;
        while(ss>>x)v.push_back(x);
        if(v.size()==2){
            int l=v[0];
            int r=v[1];
            if(l<=r){
                cout<<quary(l,r,0,0,n-1)<<endl;
            }else{
                int val1=quary(0,r,0,0,n-1);
                int val2=quary(l,n-1,0,0,n-1);
                cout<<min(val1,val2)<<endl;
            }
        }else{
            int l=v[0];
            int r=v[1];
            int val=v[2];
            if(l<=r){
                update(l,r,0,0,n-1,val);
            }else{
                update(0,r,0,0,n-1,val);
                update(l,n-1,0,0,n-1,val);
            }
        }
    }
    return 0;
}