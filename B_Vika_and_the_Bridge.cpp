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
        int l=0,h=n;
        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            int temp=0;
            unordered_map<int,int>mp;
            for(int i=n-1;i>=0;i-=mid){
                mp[arr[i]]++;
            }
            if(mp.size()>2){
                
            }
        }
    }
    return 0;
}