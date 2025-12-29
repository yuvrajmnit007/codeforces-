#include<iostream>
#include<algorithm>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int arr2[n];
        for(int i=0;i<n;i++){
            arr2[i]=arr[i];
        }
        sort(arr,arr+n);
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr2[i]){
                cout<<"NO"<<endl;
                break;
            }else{
                k++;
            }
        }
        if(k==n){
            cout<<"YES"<<endl;
        }
    }
    return 0;
 }