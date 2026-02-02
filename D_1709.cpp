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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>help;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++) {
                if (a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    help.push_back({1,j+1});
                }
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++) {
                if (b[j]>b[j+1]){
                    help.push_back({2,j+1});
                    swap(b[j],b[j+1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                help.push_back({3,i+1});
            }
        }
        cout<<help.size()<<endl;
        for(int i=0;i<help.size();i++){
            cout<<help[i].first<<" "<<help[i].second<<endl;
        }
    }
    return 0;
}