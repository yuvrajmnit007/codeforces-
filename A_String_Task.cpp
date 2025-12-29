#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    for(char &ch : st){
        ch=tolower(ch);
    }
    for(int i=0;i<st.length();i++){
        if(st[i]=='a' or st[i]=='e' or st[i]=='i' or st[i]=='o' or st[i]=='u' or  st[i]=='y'){

        }
        else{
            cout<<"."<<st[i];
        }
        
    }
    return 0;
}