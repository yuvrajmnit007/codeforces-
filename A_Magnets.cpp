#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==11){
            j=j+1;
        }
    }
    cout<<j<<endl;
    return 0;
}
