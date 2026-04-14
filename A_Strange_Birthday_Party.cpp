#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n),arr1(m);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<m;j++){
            cin>>arr1[j];
        }
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({arr1[arr[i]-1],arr[i]-1});
        }
        sort(vec.begin(),vec.end());
        sort(arr1.begin(),arr1.end());
        int sum=0;
        int j=0;
        for(int i=n-1;i>=0;i--){
            int cost=vec[i].first;
            int idx=vec[i].second;
            if(cost>arr1[j]){
                sum+=arr1[j];
                j++;
            }else{
                sum+=cost;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}