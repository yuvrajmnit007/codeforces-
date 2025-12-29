#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int t;
    cin >> t;
    long long power = 1;
    for (int i = 0; i < 3 * t; i++) {
        power = (power * 3) % MOD;
    }
    long long notinclude = 1;
    for (int i = 0; i < t; i++) {
        notinclude = (notinclude * 7) % MOD;
    }
    long long ans = (power - notinclude + MOD) % MOD;
    cout << ans << endl;
    return 0;
}
