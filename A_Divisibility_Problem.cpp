#include<iostream>
using namespace std;
int main(){
    int n,t,k;
    int j=0;
    cin>>n;
    for(int i=0 ;i<n;i++){
        int a,b;
        cin>>a;
        cin>>b;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            t=a/b;
            k=(t+1)*b-a;
            cout<<k<<endl;
        }
    }
    return 0;
}