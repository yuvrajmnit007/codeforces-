#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        for(auto it:b){
            int l=0,r=n;
            while(l<r){
                int mid=l+(r-l)/2;
                if(a[mid]<=it){
                    l=mid+1;
                }else{
                    r=mid;
                }
            }
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}