#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        long long m = n;
        long long len = min(b,a/m);
        long long ans = 1;
        m--;
        while (m >= 1) {
            long long bro = min(b, a/m);
            if (len != bro) {  
                ++ans;
                len = bro;
            }
            --m;
        }
        cout << ans << '\n';
    }
    return 0;
}
