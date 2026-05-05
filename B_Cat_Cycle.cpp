#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        k=k-1;
        if(n%2==0){
            cout<<(k%n)+1<<endl;
        }else{
            int temp=n/2;
            cout<<(k+k/temp)%n+1<<endl;
        }
    }
    return 0;
}