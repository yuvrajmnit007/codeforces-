#include<iostream>
using namespace std;
int main(){
    int count =0;
    string st;
    cin>>st;
    for(int i=0;i<st.length();i++){
        if(isupper(st[i])){
            count++;
        }
    }
    if(count>st.length()-count){
        for(int i=0;i<st.length();i++){
            st[i]=toupper(st[i]);
        }
        cout<<st<<endl;
    }
    else{
        for(int i=0;i<st.length();i++){
            st[i]=tolower(st[i]);
        }
        cout<<st<<endl;
    }
    return 0;
}