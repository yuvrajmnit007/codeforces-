#include<bits/stdc++.h>
using namespace std; 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>nums(n);
        unordered_map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            cin>>nums[i];
            mp[nums[i]-i]++;
        }
        long long count=0;
        for(auto it:mp){
            if(it.second>1){
                count+=(it.second*(it.second-1))/2;
            }
        }
        cout<<count<<endl;
    }  
    return 0;
}