#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        vector<int>help(26,0);
        for(int i=0;i<st.size();i++){
            help[st[i]-97]++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(help[i]==1){
                count++;
                help[i]=0;
            }
        }
        string new;
        for(int i=0;i<st.size();i++){
            if(help[st[i]-97]!=0){
                new.push_back(st[i]);
            }
        }
        
    }
}