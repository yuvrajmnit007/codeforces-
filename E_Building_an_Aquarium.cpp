#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll low = 0LL;
        ll high = 1e12;
        ll ans = -1LL;
        while (low <= high) { 
            ll mid = low + (high - low) / 2;
            ll sum = 0;
            for (int i = 0; i < n; i++) {
                sum += max(0LL, mid - arr[i]);
                if (sum > k) break; 
            }

            if (sum <= k) {
                ans = mid;
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }
        cout << ans << endl;
    }
    return 0;
}
