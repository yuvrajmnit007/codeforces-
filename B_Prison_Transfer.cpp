#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,t,c;
cin>>n>>t>>c;
long long arr[n];
for(long long i=0;i<n;i++){
    cin>>arr[i];
}
long long c1=0,c2=0;

for(long long i=0;i<n;i++){
    if(arr[i]<=t){
        c1++;
    }
    else{
        c2+=max(0ll,c1-c+1);
        c1=0;
    }
    
}
c2+=max(0ll,c1-c+1);
cout<<c2;
return 0;}