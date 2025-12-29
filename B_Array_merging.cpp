#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        vector<int>help1(2*n+1,0);
        vector<int>help2(2*n+1,0);
        int count=1;
        for(int i=1;i<n;i++){
            if(arr1[i]==arr1[i-1]){
                count++;
            }else{
                help1[arr1[i-1]]=max(help1[arr1[i-1]],count);
                count=1;
            }
        }
        help1[arr1[n-1]]=max(help1[arr1[n-1]],count);
        count=1;
        for(int i=1;i<n;i++){
            if(arr2[i]==arr2[i-1]){
                count++;
            }else{
                help2[arr2[i-1]]=max(help2[arr2[i-1]],count);
                count=1;
            }
        }
        help2[arr2[n-1]]=max(help2[arr2[n-1]],count);
        int ans=INT_MIN;
        for(int i=0;i<=2*n;i++){
            ans=max(ans,help1[i]+help2[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}