#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int>mp;
    while(t--){
        string st;
        cin>>st;
        mp[st]++;
        if(mp[st]==1){
            cout<<"OK"<<endl;
        }else{
            cout<<st<<mp[st]-1<<endl;
        }
    }
    return 0;
}