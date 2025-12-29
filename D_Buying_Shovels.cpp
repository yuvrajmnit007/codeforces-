#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans=n;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                long long d1 = i;
                long long d2 = n / i;
                if (d1 <= k) ans = min(ans, n / d1);
                if (d2 <= k) ans = min(ans, n / d2);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
