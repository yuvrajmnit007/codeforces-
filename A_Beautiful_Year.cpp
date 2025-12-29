#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    a=n%10;
    b=(n-a)%100;
    c=(n-a-b)%1000;
    d=(n-a-b-c)%10000;
    return 0;
}