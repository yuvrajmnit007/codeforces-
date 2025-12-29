#include<iostream>
using namespace std;
int main(){
    int n;
    int j=1;
    int count_0=0;
    int count_1=0;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i]%2;
    }
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            count_0++;
        }
        if(arr1[i]==1){
            count_1++;
        }
    }
    if(count_0 > count_1){
        for(int i=0;i<n;i++){
            if(arr1[i]==1){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }if(count_0 < count_1){
        for(int i=0;i<n;i++){
            if(arr1[i]==0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
return 0;
}