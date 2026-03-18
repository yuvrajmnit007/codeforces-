#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string>segtree;
void build(int idx,int l,int r,string&s){
    
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n=s.size();
    segtree.resize(4*n);
    build(0,0,n-1,s);
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<f(l,r,0,0,n-1);
    }
    return 0;
}