#include<iostream>
using namespace std;
int main(){
    int n;
    int p,q;
    char ch;
    cin>>n;
    while(n--){
    cin>>p>>ch>>q;
    if(ch=='+'){
        cout<<p+q<<endl;
    }else{
        cout<<p-q<<endl;
    }
    }
    return 0;
}