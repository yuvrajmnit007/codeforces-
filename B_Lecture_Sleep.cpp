#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>arr1(n),arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>pre(n,0);
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        if(i==0&&arr2[i]==1){
            pre[i]=arr1[i];
        }else if(i>0){
            if(arr2[i]==1){
                pre[i]=pre[i-1]+arr1[i];
            }else{
                pre[i]=pre[i-1];
            }
        }
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr1[i];
    }
    int mx=-1e18;
    mx=max(mx,sum+pre[n-1]-pre[k-1]);
    for(int i=k;i<n;i++){
        sum+=arr1[i];
        sum-=arr1[i-k];
        mx=max(mx,sum+pre[i-k]+pre[n-1]-pre[i]);
    }
    cout<<mx<<endl;
    return 0;
}