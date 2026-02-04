#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<int>arr;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>m){
                count++;
            }else{
                arr.push_back(x);
            }
        }
        sort(arr.begin(),arr.end());
        int p=1;
        for(int i=(int)arr.size()-1;i>=0;i--){
            if(arr[i]*p>m){
                count++;
            }else{
                p=p*2;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}