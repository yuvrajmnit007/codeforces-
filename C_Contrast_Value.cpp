#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long c;
        if(n==1)c=arr[0];
        else{
            for(int i=1;i<n;i++){
                c=c+abs(arr[i]-arr[i-1]);
            }
        }
        
    }
}