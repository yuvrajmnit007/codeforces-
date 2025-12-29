#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    int x=0;
    long long ans=0;
    if(n==1){
        cout<<3<<endl;
    }
    else if(n==2){
        cout<<6<<endl;
    }
    else{
    while(n>0){
        int v=1;
       while(v<=n){
        v=v*3;
        x++;
       }
       ans+=pow(3,(x-2))*(8+x);
       n=n-(v/3);
       v=1;
       x=0;

    }
    cout<<ans<<endl;
}
}
return 0;}