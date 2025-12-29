#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int temp[100];
    int i=left;
    int j=mid+1;
    int k=left;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=right){
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int i=left;i<=right;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[], int i,int j){
    if(i<j){
        int mid=i+(j-i)/2;
        mergesort(arr,i,mid);
        mergesort(arr,mid+1,j);
        merge(arr,i,mid,j);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        mergesort(arr,0,n);
        
    }
    return 0;
}