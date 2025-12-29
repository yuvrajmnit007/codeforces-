#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s , t;
        cin>>s>>t;
        vector<int>help1(256,0);
        vector<int>help2(256,0);
        for(int i=0;i<n;i++){
            help1[s[i]]++;
            help2[t[i]]++;
        }
        bool ans=true;
        for(int i=0;i<256;i++){
            if(help1[i]!=help2[i]){
                ans=false;
            }
        }
        if(ans==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}