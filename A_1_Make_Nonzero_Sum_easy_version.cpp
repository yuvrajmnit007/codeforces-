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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<int,int>>p;
        for(int i=1;i<n;i+=2){
            if(arr[i]==arr[i-1]){
                p.push_back({i-1,i});
            }else{
                p.push_back({i-1,i-1});
                p.push_back({i,i});
            }
        }
        if(p.size()==0||p[0].first!=0||p[p.size()-1].second!=n-1){
            cout<<-1<<endl;
        }else{
            cout<<p.size()<<endl;
            for(int i=0;i<p.size();i++){
                cout<<p[i].first+1<<" "<<p[i].second+1<<endl;
            }
        }
    }
    return 0;
}