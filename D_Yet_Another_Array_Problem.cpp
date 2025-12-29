#include<bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y){
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=2;j<arr[i]+2;j++){
                if(gcd(arr[i],j)==1){
                    a=min(a,j);
                    break;
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}