#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long> sum(n);
        sum[0]=arr[0];
        for(int i=1;i<n;i++){
            sum[i]=arr[i]+sum[i-1];
        }
        long long ans=0;
        for(int i=1;i<=n;i++){
            if(!(n%i)){
                long long start=i-1;
                long long mx=sum[start];
                long long mn=sum[start];
                for(int j=start+i;j<n;j=j+i){
                    long long help=sum[j]-sum[j-i];
                    mx=max(mx,help);
                    mn=min(mn,help);
                }
                ans=max(ans,mx-mn);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}