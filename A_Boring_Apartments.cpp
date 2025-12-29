#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int p;
        cin>>p;
        if(p%1111==0){
            cout<<10*p/1111<<endl;
            return 0;
        }
        if(p%111==0){
            cout<<10*p/111<<endl;
            return 0;
        }
        if(p%11==0){
            cout<<10*p/111<<endl;
            return 0;
        }
        if(p%1==0){
            cout<<10*p/1111<<endl;
            return 0;
        }
    }
    return 0;
}