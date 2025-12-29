#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        char target = s[n - 1];
        int ans = 0;
        for (int i = 0; i < n - 1; ++i){
            if (s[i] != target) ++ans;
        }
        cout << ans << '\n';
    }
    return 0;
}
