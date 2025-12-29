#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        set<long long> possible_x;
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                possible_x.insert(a[i] + b[i]);
            }
        }
        if (possible_x.size() > 1) {
            cout << 0 << '\n'; 
            continue;
        }
        if (possible_x.size() == 1) {
            long long x = *possible_x.begin();
            bool valid = true;
            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    long long bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        valid = false;
                        break;
                    }
                }
            }

            cout << (valid ? 1 : 0) << '\n';
        }
        else {
            long long low = *max_element(a.begin(), a.end());
            long long high = low + k;
            long long count = 0;
            for (long long x = low; x <= high; ++x) {
                bool valid = true;
                for (int i = 0; i < n; ++i) {
                    if (b[i] != -1 && a[i] + b[i] != x) {
                        valid = false;
                        break;
                    }
                    if (b[i] == -1) {
                        long long bi = x - a[i];
                        if (bi < 0 || bi > k) {
                            valid = false;
                            break;
                        }
                    }
                }
                if (valid) count++;
            }

            cout << count << '\n';
        }
    }

    return 0;
}
