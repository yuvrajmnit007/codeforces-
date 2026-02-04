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
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        if(n==2){
            cout<<"YES"<<endl;
        }
        else{
            bool ans=false;
            for(int i=2;i<n;i++){
                if(b[i]>b[i-1]){
                    ans=true;
                    break;
                }
            }
            if(ans)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}