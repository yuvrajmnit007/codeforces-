#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        string st; cin>>st;
        int zeros=0,ones=0;
        for(char c:st){
            if(c=='0'){
                zeros++;
            }else{
                ones++;
            }
        }
        int i=0;
        while(true){
            if(st[i]=='0'&&ones>0){
                ones--;
                i++;
            }else if(st[i]=='1'&&zeros>0){
                zeros--;
                i++;
            }else{
                break;
            }
        }
        cout<<st.size()-i<<endl;
    }
    return 0;
}