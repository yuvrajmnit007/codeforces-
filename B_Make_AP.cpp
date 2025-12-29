#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(2*b<=a+c){
            if((a+c)%(2*b)==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if((2*b-c)%a==0){
                cout<<"YES"<<endl;
            }
            else if((2*b-a)%c==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}