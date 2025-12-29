#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;

        if (k == 0) {
            cout << 0 << endl;
            continue;
        }
        if (k > n) k = n; 
        int curr = 0;
        for (int i = 0; i < k; ++i)
            if (st[i] == 'W') ++curr;

        int ans = curr;
        for (int i = k; i < n; ++i){
            if (st[i - k] == 'W') --curr; 
            if (st[i] == 'W') ++curr;     
            ans = min(ans, curr);
        }

        cout << ans << '\n';
    }
    return 0;
}
