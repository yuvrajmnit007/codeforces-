#include <bits/stdc++.h>
using namespace std;

string s;
int n;

int solveRec(int i) {
    if (i >= n) return 0;

    int j = i;
    while (j < n && s[j] == s[i]) {
        j++;
    }

    int len = j - i;
    return (len / 3) + solveRec(j);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> s;

        // merge circular same characters
        while (s.size() > 1 && s[0] == s.back()) {
            s.pop_back();
        }

        n = s.size();
        cout << solveRec(0) << '\n';
    }
}
