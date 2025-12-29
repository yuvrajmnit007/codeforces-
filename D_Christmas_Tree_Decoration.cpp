#include<bits/stdc++.h>
using namespace std;
long long MOD = 998244353;
long long F[60], I[60];
long long help(long long b, long long e) {
    long long r = 1;
    b %= MOD;
    while (e) {
        if (e & 1) r = (r * b) % MOD;
        b = (b * b) % MOD;
        e >>= 1;
    }
    return r;
}
long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return F[n] * I[k] % MOD * I[n - k] % MOD;
}
int main() {
    F[0] = 1;
    I[0] = 1;
    for (int i = 1; i <= 55; i++) {
        F[i] = (F[i - 1] * i) % MOD;
        I[i] = help(F[i], MOD - 2);
    }
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin>>n;
            vector<long long> arr(n + 1);
            long long tot = 0;
            for (int i = 0; i <= n; i++) {
                cin >> arr[i];
                tot += arr[i];
            }
            long long cycles = tot / n;
            int extra = tot % n;
            long long necessary = 0;
            int type1 = 0; 
            for (int i = 1; i <= n; i++) {
                if (arr[i] < cycles) {
                    necessary += (cycles - arr[i]);
                }
                if (arr[i] <= cycles) {
                    type1++;
                }
            }
            long long spare = arr[0] - necessary;
            if (spare < 0) {
                cout << 0 << "\n";
                continue;
            }
            long long valid_sets = 0;
            int type2 = n - type1;
            for (int k = 0; k <= extra; k++) {
                if (k > spare) break; 
                if (k <= type1 && (extra - k) <= type2) {
                    long long ways = C(type1, k) * C(type2, extra - k) % MOD;
                    valid_sets = (valid_sets + ways) % MOD;
                }
            }
            long long ans = valid_sets * F[extra] % MOD * F[n - extra] % MOD;
            cout << ans << "\n";
                }
    }
    return 0;
}