#include<iostream>
using namespace std; 
int main(){
    int b;
    cin>>b;
    while(b--){
       int n;
       cin>>n;
       int m=2;
       for(int i=2;i<n;i++){
            m=2*m;
            if(n%(m-1)==0){
                cout<<n/(m-1)<<endl;
                break;
            }
       }
    }
    return 0;
}