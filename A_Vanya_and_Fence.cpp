#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n,
    cin>>h;
    int j=0;
    int p=0;
    int q=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            j++;
        }
        if(arr[i]>h && arr[i]%h==0){
            p=p+arr[i]/h;
        }
        if(arr[i]>h && arr[i]%h!=0){
            q=q+arr[i]/h+1;
        }
    }
    cout<<j+p+q<<endl;
    return 0;
}