#include<iostream>
using namespace std;
int main(){
    int x;
    x=20;
    int *y=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
    cout<<&y<<endl;
    return 0;
}