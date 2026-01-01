#include <bits/stdc++.h>
using namespace std;
bool search(unordered_map<int, unordered_set<string>>& help,string &st1, string &st2) {
    int sz1 = st1.size();
    int sz2 = st2.size();
    return help[sz1].count(st1) && help[sz2].count(st2);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v1(n);
        unordered_map<int, unordered_set<string>> help;
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            help[v1[i].size()].insert(v1[i]);
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            bool ok = false;
            string &st = v1[i];
            for (int j = 1; j < st.size(); j++) {
                string st1 = st.substr(0, j);
                string st2 = st.substr(j);
                if (search(help, st1, st2)) {
                    ok = true;
                    break;
                }
            }
            ans += (ok ? '1' : '0');
        }
        cout << ans << endl;
    }
    return 0;
}
