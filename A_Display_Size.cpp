#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=int(sqrt(n));
    if(k*k==n){
        cout<<k<<" "<<k<<endl;
    }else{
        k=k+1;
        while(n%k!=0){
        k++;
        }
        cout<<n/k<<" "<<k<<endl;
    }
    return 0;
}
