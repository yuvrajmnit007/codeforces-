#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n;
        int j=0;
        while(p>=1 &&j<=n){
            if(p%6==0){
                p=p/6;
                j++;
            }else if(p%3==0){
                p=2*p;
                j++;
            }else{
                break;
            }
        }
        if(p==1){
            cout<<j<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}