#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int s=0;
        for (int i = 0; i < 3; i++) {
            vector<int> a(n);
            for (int j = 0; j < n; j++) cin >> a[j];
            for (int j = 0; j < n; j++) {
                if ((k | a[j]) != k) break;
                s |= a[j];
            }
        }
        cout << (s== k ? "Yes\n" : "No\n");
    }
    return 0;
}
