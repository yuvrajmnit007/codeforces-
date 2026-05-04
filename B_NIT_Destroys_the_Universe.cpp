#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0,j=n-1;
        while(i<n&&arr[i]==0){
            i++;
        }
        while(j>=0&&arr[j]==0){
            j--;
        }
        if(i>j){
            cout<<0<<endl;
            continue;
        }
        while(i<=j){
            if(arr[i]==0)ans++;
            i++;
        }
        if(ans==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}