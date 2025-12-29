#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        int ans=upper_bound(arr.begin(),arr.end(),t)-arr.begin();
        cout<<ans<<endl;
    }
    return 0;
}