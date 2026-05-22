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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag=1;
        sort(arr.begin(),arr.end());
        int sum=1;
        for(int i=0;i<n;i++){
            if(arr[i]>sum){
                cout<<"NO"<<endl;
                flag=0;
                break;
            }else{
                if(i!=0){
                    sum+=arr[i];
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
    }
    return 0;
}