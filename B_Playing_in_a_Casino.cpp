#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> vec(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> vec[j][i];
            }
        }
        long long ans = 0;
        for (int i = 0; i < m; i++) {
            sort(vec[i].begin(), vec[i].end());
            long long sum = 0;
            for (int j = 0; j < n; ++j) sum += vec[i][j];
            for (int j = 0; j < n; ++j) {
                ans += sum - 1LL * vec[i][j] * (n-j);
                sum -= vec[i][j];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
