#include<iostream>
using namespace std;
int main(){
    int t;
    int avg;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        int sum=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(sum%n==0 && sum/n==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
