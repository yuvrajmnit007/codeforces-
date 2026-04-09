#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr1(n),arr2(n);
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mp1[arr1[i]]=i;
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        mp2[(i-mp1[arr2[i]]+n)%n]++;
    }
    int ans=0;
    for(auto it:mp2){
        ans=max(ans,it.second);
    }
    cout<<ans<<endl;
    return 0;
}