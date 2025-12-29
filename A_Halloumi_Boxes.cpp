#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr1,arr1+n);
        bool sorted=true;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr1[i]){
                sorted=false;
                break;
            }
        }
        if(sorted||k>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}