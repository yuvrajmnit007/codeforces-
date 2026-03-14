#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n){
    int count=0;
    while(n>0){
        count+=(n%2);
        n=n/2;
    }
    return count;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cout<<2*n-f(n)<<endl;
    }
    return 0;
}