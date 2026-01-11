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
        int i=0,j=n-1;
        bool flag=true;
        int help;
        while(i<=j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }else{
                if(flag){
                    int a,b;
                    a=arr[i];
                    b=arr[j];
                    while(arr[i])
                }
            }
        }
     }
     return 0;
}