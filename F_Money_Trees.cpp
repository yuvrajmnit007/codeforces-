#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr1(n),arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        int ans=0;
        int sum=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(i>=1&&arr2[i-1]%arr2[i]!=0){
                j=i;
                sum=0;
            }
            sum+=arr1[i];
            while(j<=i&&sum>k){
                sum-=arr1[j];
                j++;
            }
            ans=max(ans,i-j+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}