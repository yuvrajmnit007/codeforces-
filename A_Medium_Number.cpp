#include<iostream>
using namespace std;
int sort()
int main(){
    int n;
    cin>>n;
    while(n--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
    return 0;
}