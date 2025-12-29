#include<iostream>
#include<math.h>
using namespace std; 
int max(int c,int d){
    if(c>d){
        return c;
    }else{
        return d;
    }
} 
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double m=sqrt(a*a+b*b);
    double n=sqrt(c*c+d*d);
    if(m>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
return 0;
}