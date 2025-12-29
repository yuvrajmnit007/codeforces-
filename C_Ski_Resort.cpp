#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        long long arr[n];
        for(long long i=0;i<n;i++)cin>>arr[i];
        for(long long i=0;i<n;i++){
            if(arr[i]<=q){
                arr[i]=1;
            }else{
                arr[i]=0;
            }
        }
        long long ans=0LL;
        long long count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }else{
                if(count>=k){
                    ans+=(count-k+1)*(count-k+2)/2;
                }
                count=0;
            }
        }
        if(count>=k){
                ans+=(count-k+1)*(count-k+2)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}