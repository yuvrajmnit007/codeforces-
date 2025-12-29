#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int l=1;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                l=i;
                break;
            }
        }
        if(l==1){
            cout<<l<<" "<<a-l<<endl;
        }else{
            cout<<a/l<<" "<<a-a/l<<endl;
        }
       
    }
    return 0;
}