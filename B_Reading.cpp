#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    sort (arr1,arr1+n);
    int t=0;
    cout<<arr1[n-k]<<endl;
    for(t=0;t<=k;t++){
    for(int i=0;i<n;i++){
        if(arr1[n-k+t]==arr[i]){
            cout<<i+1<<" ";
        }
    }
}
    cout<<endl;
    return 0;
}