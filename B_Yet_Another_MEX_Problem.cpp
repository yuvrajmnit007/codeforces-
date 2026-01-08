#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> freq(n + 2, 0);
        for (auto x : arr) {
            if (x <= n) freq[x]++;
        }
        int mex = 0;
        while (mex <= n && freq[mex] > 0 && mex < k) {
            mex++;
        }
        cout << min(mex, k - 1) <<endl;
    }
    return 0;
}
