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
            ans^=arr[i];
        }
        if(ans==0){
            cout<<"YES"<<endl;
        }else{
            int x=0;
            int cnt=0;
            for(int i=0;i<n;i++){
                x^=arr[i];
                if(x==ans){
                    cnt++;
                    x=0;
                }
            }
            if(cnt>=2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}