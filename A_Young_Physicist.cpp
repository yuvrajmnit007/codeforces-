#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[3*t];
    for(int i=0;i<3*t;i++){
        cin>>arr[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<3*t;i++){
        if(i%3==0){
            sum1=sum1+arr[i];
        }
        if(i%3==1){
            sum2=sum2+arr[i];
        }
        if(i%3==2){
            sum3=sum3+arr[i];
        }
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}