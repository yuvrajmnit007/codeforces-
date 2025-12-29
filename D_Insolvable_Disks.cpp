#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (n <= 1) {
            cout << 0 << '\n';
            continue;
        }
        long long ans = 0;
        long long dia = 1;
        for (int i = 1; i + 1 < n; i++) {
            long long d1 = arr[i] - arr[i - 1];
            long long d2 = arr[i + 1] - arr[i];
            if (d2 >= d1) {
                dia++;
            } else {
                ans += dia - 1;
                dia = 1;
            }
        }
        ans += dia - 1;
        cout << ans+1<<endl;
    }

    return 0;
}
