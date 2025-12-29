#include <bits/stdc++.h>
using namespace std;
int main() {
     int n, x;
        cin >> n >> x;
        vector<long long> cnt(x + 1, 0);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a <= x)
                cnt[a]++;
        }
        for (int k = 1; k < x; k++) {
            long long carry = cnt[k] / (k + 1);
            cnt[k] %= (k + 1);
            cnt[k + 1] += carry;
        }
        bool ok = true;
        for (int k = 1; k < x; k++) {
            if (cnt[k] != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    return 0;
}
