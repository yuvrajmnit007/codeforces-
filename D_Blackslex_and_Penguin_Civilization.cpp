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
        int k=n+1;
        map<int,int>mp;
        while(k--){
            mp[pow(2,k)-1]++;
            cout<<pow(2,k)-1<<" ";
        }
        for(int i=0;i<pow(2,n);i++){
            if(mp.count(i)==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}