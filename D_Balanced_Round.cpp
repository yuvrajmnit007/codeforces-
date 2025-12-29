#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int help=INT_MIN;
        for(int j=1;j<n;j++){
            if(arr[j]-arr[j-1]<=k){
                count++;
            }else{
                help=max(count,help);
                count=0;
            }
        }
        help=max(count,help);
        cout<<n-help-1<<endl;
    }
    return 0;
}