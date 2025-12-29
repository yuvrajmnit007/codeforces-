#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,90,8,4,6,5,2,-2,3,7};
    int max;
    int min;
    max = min = arr[0];
    for(int i=1;i<=9;i++){
        if(arr[i]>max){
            max=arr[i];
        }else{
            if(arr[i]<min){
                min=arr[i];
            }
        }
    }
    cout<<"max ="<<max<<endl;
    cout<<"min ="<<min<<endl;
    return 0;
}