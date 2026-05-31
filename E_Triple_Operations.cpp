#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int ans=0;
        int temp=a;
        while(temp>0){
            ans++;
            temp/=3;
        }
        int s=ans;
        ans*=2;
        int l=a;
        while(true){
            int p=pow(3,s);
            ans+=s*(min(p-1,b)-l);
            s++;
            l=p-1;
            if(l>=b)break;
        }
        cout<<ans<<endl;
    }
    return 0;
}