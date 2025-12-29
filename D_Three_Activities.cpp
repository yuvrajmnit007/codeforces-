#include <bits/stdc++.h>
using namespace std;
vector<int> findmax(vector<int> &arr) {
    vector<pair<int, int>> help(arr.size());
    for (int i = 0; i < arr.size(); i++) {
        help[i] = {arr[i], i};
    }
    sort(help.rbegin(), help.rend());
    vector<int> ans;
    for (int i = 0; i < min(3, (int)arr.size()); i++) {
        ans.push_back(help[i].second); 
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        vector<int> maxa = findmax(a);
        vector<int> maxb = findmax(b);
        vector<int> maxc = findmax(c);
        int ans = 0;
        for (int i = 0; i < maxa.size(); i++) {
            for (int j = 0; j < maxb.size(); j++) {
                for (int k = 0; k < maxc.size(); k++) {
                    int x = maxa[i], y = maxb[j], z = maxc[k];
                    if (x == y || x == z || y == z) continue;
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
