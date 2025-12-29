#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        if(arr[0]+arr[1]==arr[2]){
            cout<<"+"<<endl;
        }
        if(arr[0]-arr[1]==arr[2]){
            cout<<"-"<<endl;
        }
    }
    return 0;
}