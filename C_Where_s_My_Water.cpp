#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n<=1){
            cout<<k-arr[0]<<endl;
            continue;
        }
        vector<int>water(n);
        vector<vector<int>>mx(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int sum=0;
            int h1=arr[i];
            for (int m=i;m>=0;m--) {
                h1=max(h1,arr[m]);
                sum+=(k-h1);
            }
            h1=arr[i];
            for(int p=i+1;p<n;p++) {
                h1=max(h1,arr[p]);
                sum+=(k-h1);
            }
            water[i]=sum;
        }
        for(int i=0;i<n;i++){
            int temp=-1;
            int idx=i;
            for (int j=i;j<n;j++) {
                if(arr[j]>temp) {
                    temp=arr[j];
                    idx=j;
                }
                mx[i][j]=idx;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,abs(water[i]+water[j]-water[mx[i][j]]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}