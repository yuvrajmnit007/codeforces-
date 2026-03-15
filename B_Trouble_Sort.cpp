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
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag=false;
        bool flag1=false;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==1)flag = true;
            if(!b[i])flag1=true;
        }
        if(is_sorted(a.begin(),a.end())||(flag&&flag1)){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}