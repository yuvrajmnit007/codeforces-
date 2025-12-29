#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    for(int i=1;i*i<=n;i++){
        if(i*(i+1)*(i+2)/6<=n){
            p=i;
        }
    }
    cout<<p<<endl;
    return 0;
}