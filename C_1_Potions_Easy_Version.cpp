#include <bits/stdc++.h>
using namespace std;
#define int long long
// unordered_map<int,int>dp;
// int f(int sum,int idx,vector<int>&arr){
//     if(sum<0)return 0;
//     if(idx>=arr.size())return 0;
//     int key=(sum<<20)|idx;;
//     if(dp.count(key))return dp[key];
//     int take=0,nottake=0;
//     if(sum+arr[idx]>=0){
//         take=1+f(sum+arr[idx],idx+1,arr);
//     }
//     nottake=f(sum,idx+1,arr);
//     return dp[key]=max(take,nottake);
// }
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        pq.push(arr[i]);
        if(sum<0){
            sum-=pq.top();
            pq.pop();
        }
    }
    cout<<pq.size()<<endl;
    return 0;
}