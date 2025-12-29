#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,k; 
        cin>>n>>k;
        int arr[n]; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int p=0,q=0;
        int help[k+1]={0};
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                help[arr[i]]++;
            }
        }
        for(int i=0;i<k;i++){
            if(help[i]==0){
                p++;
            }
        }
        cout<<max(p,help[k])<<endl;
    }
    return 0;
}