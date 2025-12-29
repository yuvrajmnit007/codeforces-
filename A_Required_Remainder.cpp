#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    int num =1;
    for(int i=1;i<=n;i++){
        num=num*m;
    }
    cout<<num<<endl;
    return 0;
}