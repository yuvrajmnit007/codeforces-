#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[7];
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int j=0;
    int n=t;
    while(n>0){
        n=n-arr[j%7];
        j++;
    }
    if(n<=0 && j%7!=0){
        cout<<j%7<<endl;
    }else if(n<=0){
        cout<<7<<endl;
    }
    return 0;
}