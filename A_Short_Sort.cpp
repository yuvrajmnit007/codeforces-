#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        int k=0;
        if(st[0]=='a'){
            k++;
        }
        if(st[1]=='b'){
            k++;
        }
        if(st[2]=='c'){
            k++;
        }
        if(k>=1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}