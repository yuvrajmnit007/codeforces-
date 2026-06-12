#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        bool ans=false;
        int sum=0;
        int prev=-1;
        for(auto it=mp.rbegin(); it!=mp.rend();it++){
            if(prev!=-1 && prev-it->first>k){
                sum=0;
            }
            if(sum%2==1){
                ans=true;
                break;
            }
            sum+=it->second;
            if(sum%2==0){
                ans=true;
                break;
            }
            prev=it->first;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}