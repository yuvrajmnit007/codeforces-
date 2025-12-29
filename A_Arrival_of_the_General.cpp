#include<iostream>
using namespace std;
int main(){
    int n,p,q;
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr,arr+n-1);
    for(int i=0;i<n;i++){
        if(arr1[i]==arr[n-1]){
            p=i;
        }if(arr1[i]==arr[0]){
            q=i;
        }
    }
    cout<<n-p+n-q<<endl;
    return 0;
}