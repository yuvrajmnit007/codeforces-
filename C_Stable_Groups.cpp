#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>help;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]>x)help.push_back(arr[i]-arr[i-1]);
        }
        sort(help.begin(),help.end());
        int ans=help.size()+1;
        for(int i=0;i<help.size();i++){
            int temp=help[i]/x-1;
            if(help[i]%x!=0){
                temp++;
            }
            if(k>=temp){
                ans--;
                k-=temp;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}