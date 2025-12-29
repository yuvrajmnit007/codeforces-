#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        if(a>x && a<y||a<x&&a>y){
            if(a==(x+y+1)/2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}