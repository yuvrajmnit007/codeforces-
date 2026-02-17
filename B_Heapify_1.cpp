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
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i=i+2){
            vector<int>help;
            for(int j=i;j<=n;j*=2){
                help.push_back(arr[j]);
            }
            sort(help.begin(),help.end());
            int k=0;
            for(int j=i;j<=n;j*=2){
                arr[j]=help[k];
                k++;
            }
        }
        if(is_sorted(arr.begin(),arr.end())){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}