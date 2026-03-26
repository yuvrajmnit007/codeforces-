#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int>arr(1e6,0);
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i*i<=1e6;i++){
        if(arr[i]==0){
            int j=i+i;
            while(j<=1e6){
                arr[j]++;
                j+=i;
            }
        }
    }
    while (t--) {
        int d;
        cin>>d;
        int i=d+1;
        while(i<1e6&&arr[i]!=0){
            i++;
        }
        int ans=i;
        i+=d;
        while(i<1e6&&arr[i]!=0){
            i++;
        }
        ans*=i;
        cout<<ans<<endl;
    }
    return 0;
}