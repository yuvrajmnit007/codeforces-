#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long total_sum=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total_sum+=arr[i];
        }
        long long ans=-1e18;
        if(n==2){
            ans=__gcd(arr[0],arr[1]);
        }
        long long left_sum=arr[0];
        for(int i=1;i<n;i++){
            long long right_sum=total_sum-left_sum;
            ans=max(ans,__gcd(left_sum,right_sum));
            left_sum+=arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}