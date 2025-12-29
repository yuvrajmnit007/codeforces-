#include<iostream>
using namespace std;
int maxmin(int arr[],int i, int j){
    int max,min,max1,max2,min1,min2;
    if(i==j){
        max=min=arr[i];
        //return(max,min);
    }if(i==j-1){
        if(arr[i]>arr[j]){
            max=arr[i];
            min=arr[j];
        }else{
            max=arr[j];
            min=arr[i];
        }
        //return (max,min);
    }else{
        int mid= (i+j+1)/2;
        (max1,min1)=maxmin(arr,i,mid);
        (max2,min2)=maxmin(arr,mid+1,j);
        if(max1>max2){
            max=max1;
        }else{
            max=max2;
        }
        if(min1>min2){
            min=min2;
        }else{
            min=min1;
        }

    }
}
int main(){
    int arr[10]={1,90,8,4,6,5,2,13,3,7};
    int max;
    int min;
    maxmin(arr,0,9);
    cout<<"max ="<<max<<endl;
    cout<<"min ="<<min<<endl;
    return 0;
}
