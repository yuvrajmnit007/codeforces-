#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int z = 0, o = 0, t = 0;
        for (char c : s) {
            if (c == '0') ++z;
            else if (c == '1') ++o;
            else ++t;
        }
        int x_min = z;
        int x_max = z + t; 
        string ans(n, '+');
        for (int i = 1; i <= n; ++i) {
            int lower = max(x_min, i - (n - k)); 
            int upper = min(x_max, i - 1);      
            bool exists_not_removed = (lower <= upper);
            int threshold = i - (n - k + 1); 
            bool exists_removed = (x_max >= i) || (x_min <= threshold);
            if (exists_removed && !exists_not_removed) ans[i-1] = '-'; 
            else if (!exists_removed && exists_not_removed) ans[i-1] = '+'; 
            else ans[i-1] = '?'; 
        }
        cout << ans << '\n';
    }
    return 0;
}
