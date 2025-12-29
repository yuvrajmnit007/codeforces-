#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
        bool c=false;
        for(long long j=i+1;j<n;j++){
            if(arr[i]%2!=arr[j]%2 && arr[j]<arr[i]){
                swap(arr[i],arr[j]);
                c=true;
            }
        }
        if(!c){
            break;
        }
    
    }
    for(long long i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
return 0;}