#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t, p;
        cin >> s >> t >> p;
        string remst;
        int i = 0;
        int j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                remst.push_back(t[j]);
                j++;
            }
        }
        while (j < t.size()) {
            remst.push_back(t[j]);
            j++;
        }

        if (i == s.size()) { 
            sort(remst.begin(), remst.end());
            sort(p.begin(), p.end());

            int r = 0;
            for (int c = 0; c < p.size() && r < remst.size(); c++) {
                if (remst[r] == p[c]) {
                    r++;
                }
            }

            if (r == remst.size()) { 
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else { 
            cout << "NO" << endl;
        }
    }
    return 0;
}
