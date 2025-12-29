#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(n<=1){
        cout<<-1<<endl;
        return 0;
    }
    else if(n==2){
        if(arr[0]==arr[1]){
            cout<<-1<<endl;
        }else{
            cout<<1<<endl;
            cout<<1<<endl;
        }
        return 0;
    }
    else{
        if(sum-arr[0]!=arr[0]){
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else if(sum-arr[0]-arr[1]!=arr[0]+arr[1]){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }
    return 0;
}