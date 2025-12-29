#include<bits/stdc++.h>
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
        if(n==1){
            cout<<arr[0]<<endl;
        }else{
            int k= min(arr[0],arr[1]);
            cout<<arr[0]+k<<endl;
        }
    }
    return 0;
}