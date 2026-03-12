#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        int sum=0;
        int mx=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            mx=max(mx,x);
        }
        if(sum%2==0&&mx<=sum-mx){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}