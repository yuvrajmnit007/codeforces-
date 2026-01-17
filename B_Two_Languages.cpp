#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    int t;
    cin >> t;
    while (t--) {
        unordered_map<char, bool> can1, can2;
        for (char c : s1) can1[c] = true;
        for (int i = 0; i < k; i++) can2[s2[i]] = true;
        string st;
        cin >> st;
        bool takahashi = true, aoki = true;
        for (char c : st) {
            if (!can1[c]) {
                takahashi = false;
                break;
            }
        }
        for (char c : st) {
            if (!can2[c]) {
                aoki = false;
                break;
            }
        }
        if (takahashi && !aoki) {
            cout << "Takahashi\n";
        } else if (!takahashi && aoki) {
            cout << "Aoki\n";
        } else {
            cout << "Unknown\n";
        }
    }
    return 0;
}
