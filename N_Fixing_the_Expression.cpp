#include<iostream>
using namespace std; 
int main(){
    int b;
    cin>>b;
    while(b--){
        string st;
        cin>>st;
        if(st[0]>st[2]){
            cout<<st[0]<<">"<<st[2]<<endl;
        }
        if(st[0]<st[2]){
            cout<<st[0]<<"<"<<st[2]<<endl;
        }
        if(st[0]==st[2]){
            cout<<st[0]<<"="<<st[2]<<endl;
        }
    }
    return 0;
}