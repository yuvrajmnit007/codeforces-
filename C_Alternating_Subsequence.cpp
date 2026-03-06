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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                int temp=-1e18;
                while(a[i]>0&&i<n){
                    temp=max(temp,a[i]);
                    i++;
                }
                ans+=temp;
                if(i!=n)i--;
            }else{
                int temp=-1e18;
                while(a[i]<0&&i<n){
                    temp=max(temp,a[i]);
                    i++;
                }
                ans+=temp;
                if(i!=n)i--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}