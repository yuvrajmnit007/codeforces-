#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        if(m==0){
            if(arr[0]-1==0){
                cout<<-1<<endl;
            }else{
                cout<<arr[0]-1<<endl;
            }
            continue;
        }
        if(m>n){
            cout<<-1<<endl;
            continue;
        }else if(m==n){
            cout<<arr[n-1]<<endl;
        }
        else {
            int p=arr[m-1];
            if(arr[m]==p){
                cout<<-1<<endl;
            }else{
                cout<<p<<endl;
            }
        }
    }
    return 0;
}