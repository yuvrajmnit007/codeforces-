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
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]>1){
                ans=-1;
            }
        }
        if(ans==-1){
            cout<<-1<<endl;
            continue;
        }
        sort(arr.rbegin(),arr.rend());
        for(auto it:arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}