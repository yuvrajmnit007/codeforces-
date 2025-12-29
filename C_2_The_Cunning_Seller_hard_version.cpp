#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> pows;
        long long sum = 0;
        while (n > 0) {
            long long d = n % 3;
            pows.push_back(d);
            sum += d;
            n /= 3;
        }
        int l = (int)pows.size() - 1;
       while (l > 0 && sum + 2 <= k) {
            if (pows[l] == 0) {
                l--;
                continue;
            }
            long long can = min(pows[l],(k - sum) / 2);
            pows[l] -= can;
            pows[l - 1] += 3 * can;
            sum += 2 * can;
        }
        if (sum > k) {
            cout << -1 << '\n';
            continue;
        }
        long long ans = 0;
        long long s = 1;
        for (int i = 0; i < (int)pows.size(); i++) {
            long long cost = 3 * s + (i * (s / 3));
            ans += pows[i] * cost;
            s *= 3;
        }
        cout << ans << '\n';
    }
    return 0;
}
