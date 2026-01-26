#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    cin >> st;
    int n = st.size();
    for (int i = 0; i < n; i++) {
        int x = st[i] - '0';
        if (x % 8 == 0) {
            cout << "YES\n" << x << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x = (st[i] - '0') * 10 + (st[j] - '0');
            if (x % 8 == 0) {
                cout << "YES\n" << x << "\n";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int x = (st[i] - '0') * 100
                      + (st[j] - '0') * 10
                      + (st[k] - '0');
                if (x % 8 == 0) {
                    cout << "YES\n" << x <<endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO"<<endl;
    return 0;
}
