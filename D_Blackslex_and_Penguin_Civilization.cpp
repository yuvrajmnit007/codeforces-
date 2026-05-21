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
        map<int,int>mp;
        int val=(1LL<<n)-1;
        cout<<val<<" ";
        mp[val]++;
        for(int i=n-1;i>=0;i--){
            val-=(1LL<<i);
            cout<<val<<" ";
            mp[val]++;
            for(int j=1;j<pow(2,n);j++){
                if(j%2==0)continue;
                if((j&val)==val){
                    if(mp.count(j)!=0)continue;
                    mp[j]++;
                    cout<<j<<" ";
                }
            }
        }
        for(int j=1;j<pow(2,n);j++){
            if(j%2)continue;
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}