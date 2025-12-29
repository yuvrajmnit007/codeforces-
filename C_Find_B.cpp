#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>nums,int l, int r){
    int k=r-l+1;
    unordered_map<int,int> mp;
    int Val = nums[l];
    int count = 0;
    for(int i=l;i<=r;i++){
        mp[nums[i]]++;
        if(mp[nums[i]]>count){
            count=mp[nums[i]];
        }
    }
    if(count*2>k){
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(solve(arr,l,r)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}