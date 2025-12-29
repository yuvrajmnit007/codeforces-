#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<3;i++){
            sum1=sum1+st[i];
            sum2=sum2+st[5-i];
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}