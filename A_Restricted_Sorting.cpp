#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(vector<int>&arr,vector<int>&nums,int mn,int mx,int mid){
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=arr[i]){
            int val=max(abs(mx-arr[i]),abs(mn-arr[i]));
            if(val<mid)return false;
        }
    }
    return true;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int mn=1e18,mx=-1e18;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mn=min(arr[i],mn);
            mx=max(arr[i],mx);
        }
        vector<int>nums=arr;
        sort(nums.begin(),nums.end());
        if(is_sorted(arr.begin(),arr.end())){
            cout<<-1<<endl;
            continue;
        }
        int lo=0,hi=1e11;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(f(arr,nums,mx,mn,mid)){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}