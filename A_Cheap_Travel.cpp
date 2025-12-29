#include<iostream>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int p;
    int q;
    p=(n%m)*a+(n/m)*b;
    q=n*a;
    if(p<=q){
        if((n%m)*a>b){
            cout<<(n/m)*b+b<<endl;
        }else{
            cout<<p<<endl;
        }
    }else{
        cout<<q<<endl;
    }
    return 0;
}