#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n; 
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>ans(n,0);
        for (int i=0;i<n;i++) {
            vector<int>w(n,0);
            w[i]=0;
            for(int j=1;j<n;j++) {
                int temp1=(i+j)%n;
                int temp2=(temp1-1+n)%n;
                w[temp1]=max(w[temp2],arr[temp2]);
            }
            vector<int>w1(n,0);
            w1[i]=0;
            for(int j=1;j<n;j++){
                int temp1=(i-j+n)%n;
                int temp2=(temp1+1)%n;
                w1[temp1]=max(w1[temp2],arr[temp1]);
            }
            int total=0;
            for(int i=0;i<n;i++){
                total+=min(w[i],w1[i]);
            }
            ans[i]=total;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}