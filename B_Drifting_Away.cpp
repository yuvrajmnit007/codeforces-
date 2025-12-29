#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string st;
        cin >> st;
        int a = 0, b = 0, c = 0;
        int pos = -1;
        int sz = st.size();
        for (int i = 0; i < sz; ++i) {
            if (st[i] == '*') {
                ++a;
                pos = i;
            } else if (st[i] == '>') {
                ++b;
            } else if (st[i] == '<') {
                ++c;
            }
        }
        if (a > 1) {
            cout << -1 << '\n';
        } else if (a == 1) {
            if (sz == 1) {
                cout << 1 << '\n';
                continue;
            }
            bool leftBad = (pos > 0 && st[pos - 1] == '>');
            bool rightBad = (pos + 1 < sz && st[pos + 1] == '<');
            if (leftBad || rightBad) {
                cout << -1 << endl;
            } else {
                ++b;
                ++c;
                cout << max(b, c) << '\n';
            }
        } else {
            cout << max(b, c) << '\n';
        }
    }

    return 0;
}
