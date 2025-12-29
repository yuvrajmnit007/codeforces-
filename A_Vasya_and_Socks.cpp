#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int k=n;
    int j=0;
    for(int i=1;i<=n;i++){
        if(k>0){
            k=k-m*i;
            j++;
        }
    }
    cout<<n+j<<endl;
    return 0;
}