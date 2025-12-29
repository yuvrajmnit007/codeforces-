#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a%4==0){
            cout<<a/4<<endl;
        }else{
            cout<<a/4+1<<endl;
        }
    }
}