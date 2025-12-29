#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum1,sum2,sum3;
        sum1=a+b;
        sum2=a+c;
        sum3=c+b;
        if(sum1>=10 || sum2>=10 || sum3>=10){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}