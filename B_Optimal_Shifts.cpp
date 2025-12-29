#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        vector<int> ones;
        for (int i = 0; i < n; ++i) if (s[i] == '1') ones.push_back(i);
        if (ones.size() == n) {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') continue;
            int dist = INT_MAX;
            int l=0, r=ones.size()-1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (ones[m] < i) {
                    dist = min(dist, i - ones[m]);
                    l = m + 1;
                } else {
                    dist = min(dist, ones[m] - i);
                    r = m-1;
                }
            }
            ans = max(ans, dist);
        }
        cout << ans << endl;
    }
    return 0;
}
