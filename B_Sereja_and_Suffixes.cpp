#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    vector<int>dp(n+1,0);
    dp[1]=freq.size();
    for(int i=1;i<n;i++){
        freq[arr[i-1]]--;
        if(freq[arr[i-1]]==0){
            freq.erase(arr[i-1]);
        }
        dp[i+1]=freq.size();
    }
    while(m--){
        int l;
        cin>>l;
        cout<<dp[l]<<endl;
    }
    return 0;
}