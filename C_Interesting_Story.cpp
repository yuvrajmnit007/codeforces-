#include <bits/stdc++.h>
using namespace std;
#define int long long
int total;
vector<int>g;
int f(vector<string>&arr,int idx){
    if(idx>=arr.size())return 0;
    int nottake=f(arr,idx+1);
    int take=0;
    vector<int>v(5,0);
    for(auto it:arr[idx]){
        v[it-'a']++;
    }
    int mx=0;
    int temp=0;
    for(int i=0;i<5;i++){
        mx=max(mx,v[i]+g[i]);
        temp+=v[i];
    }
    if(2*mx>total+temp){
        for(int i=0;i<5;i++){
            g[i]+=v[i];
        }
        total+=temp;
        take=1+f(arr,idx+1);
        for(int i=0;i<5;i++) g[i] -= v[i];
        total -= temp;
    }
    return max(take,nottake);
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        g.assign(5,0);
        total=0;
        int n;
        cin>>n;
        vector<string>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        cout<<f(vec,0)<<endl;
    }
    return 0;
}