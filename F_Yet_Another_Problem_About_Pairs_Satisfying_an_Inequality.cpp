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
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i+1>x&&st.count(x)==0){
                arr.push_back({x,i+1});
            }
        }
        sort(arr.begin(),arr.end());
        
    }
    return 0;
}