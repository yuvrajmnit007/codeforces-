#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n];
    int j=1;
    while(j<=n){
    for(int i=0;i<n;i++){
        if(arr[i]==j){
            arr2[j-1]=i;
            j++;
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]+1<<" ";
    }
    cout<<endl;
    return 0;
}