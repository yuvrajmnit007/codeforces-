#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int evensum=0;
        int oddsum=0;
        cin>>n;
        int arr[2*n];
        int arr1[(2*n)+1];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            for(int j=0;j<2*n;j++){
                if(j/2==0){
                    evensum+=arr[j];
                }else{
                    oddsum+=arr[j];
                }
            }
        }
        for(int k=0;k<2*n+1;k++){
            if(k==0){
                arr1[0]=evensum-oddsum;
            }else{
                arr1[k]=arr[k-1];
            }
        }
        for(int x=0;x<2*n+1;x++){
            cout<<arr1[x]<<" ";
        }

    }
    return 0;
}