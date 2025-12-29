#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int d=0;
    string st;
    cin>>st;
    for(int i=0;i<n;i++){
        if(st[i]=='A'){
            a++;
        } if(st[i]=='D'){
            d++;
        }
    }
    if(a==d){
        cout<<"Friendship"<<endl;
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    if(a<d){
        cout<<"Danik"<<endl;
    }
}