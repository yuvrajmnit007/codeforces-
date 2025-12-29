#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string st;
        cin >> st;

        bool has2025 = false;
        bool has2026 = false;

        for (int i = 3; i < n; i++) {
            string s = st.substr(i - 3, 4);

            if (s == "2025") has2025 = true;
            if (s == "2026") has2026 = true;
        }

        if (has2025 && !has2026) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
