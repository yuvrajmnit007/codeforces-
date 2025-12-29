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
        if(n==1 || n==2){
            cout<<"YES"<<endl;
        }else{
            int i=0; int j=n-1;
            int count=0;
            int help;
             while(i<=j){
                if(arr[i]==arr[j]){
                    i++;
                    j--;
                    help=arr[i];
                }else if(arr[i]=arr[j-1]){
                    j=j--;
                    count++;
                    help=arr[i];
                }else if(arr[i+1]==arr[j]){
                    i++;
                    count++;
                    help=arr[i];
                }else {
                    i++;j--;
                     count+=2;
                }
             }
             if(count>help){
                cout<<"NO"<<endl;
             }else{
                cout<<"YES"<<endl;
             }
        }
     }
     return 0;
}