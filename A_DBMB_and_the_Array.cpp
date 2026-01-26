#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        while(sum<s){
            sum+=x;
        }
        if(sum==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}