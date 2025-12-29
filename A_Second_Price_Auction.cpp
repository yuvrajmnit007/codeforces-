#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);
    int k=arr1[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i+1;
        }
    }
    cout<<" "<<arr1[n-2]<<endl;
    return 0;
}