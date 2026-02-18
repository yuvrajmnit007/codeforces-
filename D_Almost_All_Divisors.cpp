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
        sort(arr.begin(),arr.end());
        int k=arr[0]*arr[n-1];
        vector<int>help;
        for(int i=2;i*i<=k;i++){
            if(k%i==0){
                help.push_back(i);
                if(k/i!=i){
                    help.push_back(k/i);
                }
            }
        }
        sort(help.begin(),help.end());
        if(arr==help)cout<<k<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}