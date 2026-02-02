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
        string st;
        cin>>st;
        int c;
        c=n-1;
        vector<int>pr(n+1);
        pr[0]=0;
        for(int i=1;i<=n;i++){
            pr[i]=pr[i-1]+arr[i-1];
        }
        int sum1=0;
        int l=0,r=n-1;
        while (l<r) {
            if (st[l]=='L'&&st[r]=='R') {
                sum1+=(pr[r+1]-pr[l]);
                l++;
                r--;
            } else {
                if(st[l]!='L')l++;
                if(st[r]!='R')r--;
            }
        }
        cout<<sum1<<endl;
    }
    return 0;
}