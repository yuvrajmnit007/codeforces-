#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int sum = arr[0];
        int ans = arr[0];
        for (int j = 1; j < n; j++) {
            if ((arr[j] ^ arr[j - 1]) & 1) {
                sum = max(arr[j], sum + arr[j]);
            } else {
                sum = arr[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
