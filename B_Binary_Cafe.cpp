#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=0;
        long long p=1;
        for(int i=0;i<k;i++){
            p*=2;
            if(p>n+1){
                ans=n+1;
                break;
            }else{
                ans=p;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}