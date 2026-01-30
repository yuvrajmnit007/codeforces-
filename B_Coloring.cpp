#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(m);
        int help=n/k;
        int rem=n%k;
        for(int i=0;i<m;i++){
            cin>>a[i];
            if(a[i]>help){
                rem--;
            }
        }
        if(rem<0){
            cout<<"NO"<<endl;
        }else{
            
        }
    }
    return 0;
}