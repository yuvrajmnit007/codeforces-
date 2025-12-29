#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=0;
    int c=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }else if(a<b){
            c++;
        }else{
            m++;
            c++;
        }
    }
    if(m==c){
        cout<<"Friendship is magic!^^"<<endl;
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }
    if(m<c){
        cout<<"Chris"<<endl;
    }
    return 0;
}