#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int norm1;
        int norm2;
        int empty1=0;
        int empty2=0;
        if(m<=a){
            norm1=m;
        }else{
            norm1=a;
            empty1=m-a;
        }
        if(m<=b){
            norm2=m;
        }else{
            norm2=b;
            empty2=m-b;
        }
        int carry=empty1+empty2;
        if(carry>=c){
            cout<<norm1+norm2+c<<endl;
        }else{
            cout<<norm1+norm2+carry<<endl;
        }
    }
    return 0;
}