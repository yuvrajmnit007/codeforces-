#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            k++;
        }
    }
    int p=n-k;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            p--;
            if(p==0){
                break;
            }
        }else{
            k--;
            if(k==0){
                break;
            }
        }
        j++;
    }
    cout<<j+1<<endl;
    return 0;
}