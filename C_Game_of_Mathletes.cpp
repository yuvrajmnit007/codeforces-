#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int i=0,j=n-1;
        int count=0;
        while(i<j){
            if(arr[i]+arr[j]==k){
                count++;
                i++;
                j--;
            }else if(arr[i]+arr[j]>k){
                j--;
            }else{
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}