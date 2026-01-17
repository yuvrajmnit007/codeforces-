#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    int count=0;
    for(int i=k-1;i>=0;i--){
        sum+=arr[i];
        count++;
        if(sum>=x){
            cout<<count+n-k<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}