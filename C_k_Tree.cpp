#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
int main() {
    int n, k, d;
    cin >> n >> k >> d;
    vector<long long> dp0(n + 1, 0), dp1(n + 1, 0);
    dp0[0] = 1;
    for (int s = 0; s <= n; s++) {
        for (int w = 1; w <= k; w++) {
            if (s + w > n) break;
            if (w < d) {
                dp0[s + w] = (dp0[s + w] + dp0[s]) % MOD;
                dp1[s + w] = (dp1[s + w] + dp1[s]) % MOD;
            } else {
                dp1[s + w] = (dp1[s + w] + dp0[s] + dp1[s]) % MOD;
            }
        }
    }
    cout << dp1[n] << endl;
    return 0;
}
