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
        int ones=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                ones++;
            }
        }
        int rem=n-ones;
        if(rem==0){
            cout<<0<<endl;
        }else if(rem==1){
            int val=arr[n-1];
            if(val==2){
                if(ones>=1){
                    cout<<3<<endl;
                }else{
                    cout<<0<<endl;
                }
            }else{
                cout<<val+min(ones,val/2)<<endl;
            }
        }else{
            int temp=0;
            int temp1=0;
            for(int i=ones;i<n;i++){
                temp+=arr[i];
                temp1+=(arr[i]-2)/2;
            }
            cout<<temp+min(ones,temp1)<<endl;
        }
    }
    return 0;
}