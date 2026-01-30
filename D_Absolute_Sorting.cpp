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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mn=0,mx=1e9;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]){
                mx=min(mx,(a[i]+a[i-1])/2);
            }
            if(a[i]<a[i-1]){
                mn=max(mn,(a[i]+a[i-1]+1)/2);
            }
        }
        if(mx<mn){
            cout<<-1<<endl;
        }else{
            cout<<mn<<endl;
        }
        
    }
    return 0;
}