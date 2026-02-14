#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>help;
vector<int>f(vector<int>&arr,int idx){
    if(idx==0){
        for(auto it:help){
            if(__gcd(arr[idx],it)!=min(arr[idx],it)){
                return {};
            }
        }
        return {arr[0]};
    }
    help.clear();
    vector<int>nottake=f(arr,idx-1);
    vector<int>take;
    help=nottake;
    for(int i=0;i<nottake.size();i++){
        if(__gcd(arr[idx],nottake[i])==min(arr[idx],nottake[i])){
            take.push_back(arr[idx]);
            break;
        }
    }
    if(take.empty())take=nottake;
    else{
        for(int i=0;i<nottake.size();i++){
            if(__gcd(arr[idx],nottake[i])==min(arr[idx],nottake[i])){
                take.push_back(nottake[i]);
            }
        }
    }
    help=take;
    return take;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>ans=f(arr,n-1);
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}