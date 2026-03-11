#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int temp=0;
            int k=arr[i];
            while(k%3==0){
                temp++;
                k=k/3;
            }
            v.push_back({arr[i],temp});
        }
        sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b){
            if(a.second==b.second)
                return a.first<b.first;    
            return a.second>b.second;       
        });
        for(auto it:v){
            cout<<it.first<<" ";
        }
        cout<<endl;
    }
    return 0;
}