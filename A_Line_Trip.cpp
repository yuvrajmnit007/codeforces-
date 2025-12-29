#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int p=arr[0]-0;
        int q=2*(x-arr[n-1]);
        int ans=max(p,q);
        for(int i=1;i<n;i++){
            int diff=arr[i]-arr[i-1];
            ans=max(ans,diff);
        }
        cout<<ans<<endl;
    }
    return 0;
}