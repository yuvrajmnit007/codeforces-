#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b==c or a+c==b or b+c==a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}