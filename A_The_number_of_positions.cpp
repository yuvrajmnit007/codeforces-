#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n-b>a){
        cout<<b+1<<endl;
    }if(n-b==a){
        cout<<b<<endl;
    }
    if(n-b<a){
        cout<<n-a<<endl;
    }
    return 0;
}