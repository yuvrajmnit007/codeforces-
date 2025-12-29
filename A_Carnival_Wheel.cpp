#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
        int sum=a;
        int ans=INT_MIN;
        for(int i=1;i<=l;i++){
            sum=(sum+b)%l;
            ans=max(sum,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
