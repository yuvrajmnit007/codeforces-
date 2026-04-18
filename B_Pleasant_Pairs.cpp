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
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            arr.push_back({x,i});
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i].first*arr[j].first>=2*n)break;
                else if(arr[i].first*arr[j].first==arr[i].second+arr[j].second)ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}