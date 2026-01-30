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
        vector<int>b=a;
        sort(b.begin(),b.end());
        int ans=b[0];
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                ans=__gcd(ans,a[i]);
            }
        }
        if(ans==b[0]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}