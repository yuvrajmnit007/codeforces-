#include<iostream>
#include<iomanip>
#include<string>
using namespace std; 
int main(){
    string st;
    cin>>st;
    cout<<st[3]<<endl;
    if(st[0]=='4'){
        int h=stoi(st.substr(0,2));
        if(h>=0 && h<=3 ){
            cout<<53<<endl;
        }else{
            cout<<52<<endl;
        }
    }
    return 0;
}