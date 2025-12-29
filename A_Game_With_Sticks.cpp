#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(n>k){
        if(k%2==0){
            cout<<"Malvika"<<endl;
        }else{
            cout<<"Akshat"<<endl;
        }
    }else{
        if(n%2==0){
            cout<<"Malvika"<<endl;
        }else{
            cout<<"Akshat"<<endl;
        }
    }
    return 0;
}