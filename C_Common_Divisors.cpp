#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int t=1;
    for(long long i=2;i*i<=min;i++){
        long long k=0;
        for(int j=0;j<n;j++){
            if(arr[j]%i==0){
                k++;
                if(k==n){
                    t=t+2;
                }
            }
        }
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]%min==0 && min !=1){
            x++;
            if(x==n){
                t++;
            }
        }
    }
    cout<<t<<endl;
    return 0;
}