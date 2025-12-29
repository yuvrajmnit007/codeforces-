#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n];
        int arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        int arr3[n];
        for(int i=0;i<n;i++){
            arr3[i]=arr2[0]-arr1[i];
        }
        bool ans;
        for(int i=1;i<n;i++){
            if(arr3[i-1]<=arr3[i]){
                ans=true;
            }else{
                ans=false;
                break;
            }
        }
        if(ans==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}