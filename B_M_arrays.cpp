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
        vector<int>arr(n);
        vector<int>mp(k,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]%k]++;
        }
        int count=0;
        for(int i=0;i<k;i++){
            int a=mp[i],b=mp[(k-i+k)%k];
            if(a==0&&b==0){
                continue;
            }
            int help=min(a,b);
            a-=min(mp[i],help+1);
            b-=min(mp[(k-i+k)%k],help+1);
            count++;
            count=count+a+b;
            mp[i]=0;
            mp[(k-i+k)%k]=0;
        }
        cout<<count<<endl;
    }
    return 0;
}