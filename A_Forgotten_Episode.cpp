#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    int k;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            k=i+1;
            break;
        }
    }
    cout<<k<<endl;
    return 0;
}