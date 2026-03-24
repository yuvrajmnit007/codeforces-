#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(vector<int>&temp){
   int m=temp.size();
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(temp[i]<=temp[j]&&temp[j]<=temp[k])return false;
                if(temp[i]>=temp[j]&&temp[j]>=temp[k])return false;
            }
        }
    }
    return true;
}
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
        int ans=n;
        for(int i=0;i<n;i++){
            vector<int>temp;
            temp.push_back(arr[i]);
            for(int j=i+1;j<min(i+6,n);j++){
                temp.push_back(arr[j]);
                if(f(temp)){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}