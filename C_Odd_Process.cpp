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
        vector<int>odd,even;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2)odd.push_back(a[i]);
            else even.push_back(a[i]);
        }
        
    }
    return 0;
}