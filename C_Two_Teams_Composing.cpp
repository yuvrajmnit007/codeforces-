#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int max_freq=0;
        for(auto it:mp){
            max_freq=max(max_freq,it.second);
        }
        int res=mp.size();
        if(max_freq>res){
            cout<<res<<endl;
        }
        else if(max_freq==res){
            cout<<res-1<<endl;
        }
        else{
            cout<<max_freq<<endl;
        }
    }
    return 0;
}