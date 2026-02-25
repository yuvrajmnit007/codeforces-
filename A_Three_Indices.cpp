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
        for(int i=0;i<n;i++)cin>>arr[i];
        bool flag=false;
        for(int i=1;i<n;i++){
            int q=-1;
            int r=-1;
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j]){
                    q=j;
                    break;
                }
            }
            for(int k=i+1;k<n;k++){
                if(arr[k]<arr[i]){
                    r=k;
                    break;
                }
            }
            if(q!=-1&&r!=-1&&q<r){
                cout<<"YES"<<endl;
                cout<<q+1<<" "<<i+1<<" "<<r+1<<" "<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)cout<<"NO"<<endl;
    }
    return 0;
}