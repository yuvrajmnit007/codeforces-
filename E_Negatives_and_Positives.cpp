#include<bits/stdc++.h>
using  namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count =0;
        long long ans=0;
        int mn=INT_MAX;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans+=abs(arr[i]);
            mn=min(mn,abs(arr[i]));
            if(arr[i]<0)count++;
        }
        if(count%2==0){
            cout<<ans<<endl;
        }else{
            cout<<ans-2*mn<<endl;
        }
    }
    return 0;
}