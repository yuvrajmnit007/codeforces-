#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,c,k;
        cin>>n>>c>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=c;
        int i=0;
        while(i<n&&ans>=arr[i]){
            int diff=ans-arr[i];
            if(diff>=k){
                ans+=k+arr[i];
                k=0;
            }else{
                ans+=diff+arr[i];
                k-=diff;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}