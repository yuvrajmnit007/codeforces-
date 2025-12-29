#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int>myset;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            myset.insert(arr[i]);
        }
        int k=myset.size();
        int ans=k;
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]>=k){
                ans=arr[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}