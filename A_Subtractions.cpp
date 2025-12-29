#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        long long temp1=a;
        long long temp2=b;
        long long j=0;
        while(temp1>0 && temp2>0){
            if(temp1>temp2){
                j=j+temp1/temp2;
                temp1=temp1%temp2;
            }else{
               j=j+temp2/temp1;
               temp2=temp2%temp1;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}