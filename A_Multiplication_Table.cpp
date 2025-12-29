#include<iostream>
using namespace std; 
int main(){
    int a,b;
    cin>>a>>b;
    int k=0;
    for(int i=1;i<=a;i++){
        if(b%i==0 && a>=b/i){
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}