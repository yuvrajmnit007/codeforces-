#include<bits/stdc++.h>
using namespace std;
int main(){
long long  t,i;
cin>>t;
while(t--){
    long long  k,x;
    cin>>k>>x;
    long long  l=1;
    long long  r=2*k-1;
    long long  ans=2*k-1;
    long long total=k*k;
    if(x>=total){
        cout<<2*k-1<<endl;
    }
   else{
    while(l<=r){
        long long  m=l+(r-l)/2;
         long long sum=0;
        if(m<=k){
            sum=(1LL * m*(m+1))/2; 
        }
        else{
            long long rem=(2*k-1)-m;
            long long sub=(1LL * (rem+1)*rem)/2;
            sum=total-sub;
        }
            if(sum<x){
                l=m+1;
            }
            else{
                ans=min(ans,m);
                r=m-1;
            }
        
    }
    cout<<ans<<endl;
   }
}
return 0;
}