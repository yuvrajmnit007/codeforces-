#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,d;
    cin>>n>>m>>d;
    vector<int>arr;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
    }
    sort(arr.begin(),arr.end());
    int mid=arr[m*n/2];
    int rem=arr[0]%d;
    int ans=0;
    for(int i=0;i<m*n;i++){
        if(arr[i]%d!=rem||abs(arr[i]-mid)%d!=0){
            cout<<-1<<endl;
            return 0;
        }
        if(abs(arr[i]-mid)%d==0){
            ans+=abs(arr[i]-mid)/d;
        }
    }
    cout<<ans<<endl;
    return 0;
}