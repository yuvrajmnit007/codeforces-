#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;
    long long y = 0;
    string s = to_string(x);
    int n = s.size();

    for (int i = 0; i < n; i++) {
        int d = s[i] - '0';
        if (i == 0 && d == 9) {
            y = y * 10 + d;
        } else {
            if (d > 4) d = 9 - d;
            y = y * 10 + d;
        }
    }

    cout << y << endl;
    return 0;
}
