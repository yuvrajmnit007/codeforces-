#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=t;
    int j=0;
    while(k>0){
        k=k+arr[j]-86400;
        j++;
    }
    cout<<j<<endl;
    return 0;
}