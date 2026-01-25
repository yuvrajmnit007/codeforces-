#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    long long p=0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        p=__gcd(p,arr[i]);
        if(p==1){
            cout<<1<<endl;
            return 0;
        }
    }
    long long ans = 1;
    for(long long i=2;i*i<=p;i++){
        if(p%i==0){
            int count=0;
            while(p%i==0){
                count++;
                p/=i;
            }
            ans*=(count+1);
        }
    }
    if(p>1) ans*= 2; 
    cout<<ans<<endl;
    return 0;
}