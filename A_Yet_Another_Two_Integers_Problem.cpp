#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int p,k;
        cin>>p>>k;
        int m=abs(p-k);
        if(m%10==0){
            cout<<m/10<<endl;
        }else{
            cout<<m/10+1<<endl;
        }
    }
    return 0;
}