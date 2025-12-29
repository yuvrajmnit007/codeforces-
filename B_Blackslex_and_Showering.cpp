#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long base = 0;
        for (int i = 0; i + 1 < n; i++) {
            base += llabs(a[i] - a[i + 1]);
        }
        long long ans = base;
        ans = min(ans, base - llabs(a[0] - a[1]));
        ans = min(ans, base - llabs(a[n - 2] - a[n - 1]));
        for (int k = 1; k + 1 < n; k++) {
            long long cur = base;
            cur -= llabs(a[k - 1] - a[k]);
            cur -= llabs(a[k] - a[k + 1]);
            cur += llabs(a[k - 1] - a[k + 1]);
            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
