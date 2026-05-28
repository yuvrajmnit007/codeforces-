#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        int n;
        cin>>n;
        string st1,st2;
        cin>>st1>>st2;
        int ans=0;
        int i=0;
        while(i<n){
           while(i<n&&st1[i]==st2[i]){
                i++;
            }
            if(i==n)break;
            if(i==n-1){
                ans++;
                break;
            }
            if(st1[i]!=st2[i]&&st1[i+1]!=st2[i+1]&&st1[i]==st2[i+1]&&st1[i+1]==st2[i]){
                ans++;
                i+=2;
                continue;
            }
            else if(st1[i]!=st2[i]){
                ans++;
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}