#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cout<<n-i<<" ";
    }
    for(int i=k;i<n;i++){
        cout<<i-k+1<<" ";
    }
    cout<<endl;
    return 0;
}