#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>arr(1e7, 0);
    for(int i =2;i<1e7;i++){
        if(arr[i]==0){ 
            for (int j=2*i;j<1e7;j+=i){
                arr[j]=1;
            }
        }
    }
    vector<int>help;
    help.push_back(1);
    for(int i=2;i<1e7;i++){
        if(arr[i]==0){
            help.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<help[i]*help[i-1]<<" ";
        }
        cout<<endl;
    }

    return 0;
}