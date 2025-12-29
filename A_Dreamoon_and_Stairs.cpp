#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<=n/2;i++){
            if((n/2+i)%m==0 && n%2==0){
                cout<<n/2+i<<endl;
                return 0;
            }
            if(((n+1)/2+i)%m==0 && n%2==1){
                cout<<n/2+i+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}