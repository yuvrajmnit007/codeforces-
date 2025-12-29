#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        long long a = arr[0], b = arr[n - 1];
        int l = 0, r = n - 1;
        int ca = 1, cb = 1;
        vector<int> q;
        q.push_back(0);

        while (l < r) {
            if (a == b) {
                q.push_back(ca + cb);
                l++;
                r--;
                ca++;
                cb++;
                a += arr[l];
                b += arr[r];
            } else if (a > b) {
                cb++;
                r--;
                b += arr[r];
            } else { 
                ca++;
                l++;
                a += arr[l];
            }
        }
        cout << *max_element(q.begin(), q.end()) << "\n";
    }
    return 0;
}
