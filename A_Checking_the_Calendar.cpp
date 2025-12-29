#include <bits/stdc++.h>
using namespace std;
int main() {
    string st1, st2;
    cin >> st1 >> st2;
    vector<string> possible = {
        "sunday", "monday", "tuesday",
        "wednesday", "thursday", "friday", "saturday"
    };
    int i = 0;
    for (i = 0; i < 7; i++) {
        if (st1 == possible[i]) break;
    }
    bool ans = false;
    if (st2 == possible[(i + 2) % 7] || st2 == possible[(i + 3) % 7]||st1==st2) {
        ans = true;
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
