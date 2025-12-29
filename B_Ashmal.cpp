#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> st(n);
        for (int i = 0; i < n; i++) {
            cin >> st[i];
        }
        string s = st[0];
        for (int i = 1; i < n; i++) {
            if (s+st[i] > st[i]+s) {
                s = st[i] + s;
            } else {
                s += st[i];
            }
        }
        cout << s << endl;
    }
    return 0;
}
