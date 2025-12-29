#include<iostream>
using namespace std; 
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int meal=n-1;
    int distance=0;
    int min;
    string st="R";
    while(meal--){
        if(st=="R"){
            if(a<=b){
                distance+=a;
                st="O";
            }else{
                distance+=b;
                st="E";
            }
        }else if(st=="O"){
            if(a<=c){
                distance+=a;
                st="R";
            }else{
                distance+=c;
                st="E";
            }
        }else{
            if(c<=b){
                distance+=c;
                st="O";
            }else{
                distance+=b;
                st="R";
            }
        }
    }
    cout<<distance<<endl;
    return 0;
}