#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long arr[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long long min=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(n==1){
        cout<<0<<endl;
    }
    else if(sum%k!=0){
        cout<<-1<<endl;
    }else{
        long long p=sum-n*min;
        if(p%k!=0){
            cout<<-1<<endl;
        }else{
            cout<<p/k<<endl;
        }
    }
    return 0;
}