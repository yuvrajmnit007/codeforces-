#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                mp[a[i]]++;
            } else {
                int cnt = 0;
                while (i < n && a[i] == 0) {
                    cnt++;
                    i++;
                }
                i--;
                while (cnt-- && !mp.empty()) {
                    auto it = prev(mp.end()); 
                    ans += it->first;
                    if (it->second == 1)
                        mp.erase(it);
                    else
                        it->second--;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
