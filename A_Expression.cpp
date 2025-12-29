#include<iostream>
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int arr1[4];
    arr1[0]=arr[0]+arr[1]+arr[2];
    arr1[1]=(arr[0]+arr[1])*arr[2];
    arr1[2]=arr[0]*(arr[1]+arr[2]);
    arr1[3]=arr[0]*arr[1]*arr[2];
    int max=arr1[0];
    for(int i=0;i<4;i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
    }
    cout<<max<<endl;
    return 0;
}