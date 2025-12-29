#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    while(k--){
        if(n%10!=0){
            n=n-1;
        }else{
            n=n/10;
        }
    }
    cout<<n<<endl;
}