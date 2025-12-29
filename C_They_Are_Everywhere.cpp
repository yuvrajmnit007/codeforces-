#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    unordered_map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[st[i]]++;
    }
    int total=mp.size();
    //total no of different char. we can use set also
    mp.clear();
    int ans=INT_MAX;
    for(int i=0,j=0;i<n;i++){
        while(j<n&&mp.size()<total){
            mp[st[j]]++;
            j++;
        }
        if(mp.size()==total){
            ans=min(ans,j-i);
        }
        mp[st[i]]--;
        //i ko aage bda rhe ho to check kar lo agar vo 1 hi value ho map me us type ki to size kam karna padega 
        if(!mp[st[i]]){
            mp.erase(st[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}