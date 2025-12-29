#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> ans;

        long long d = 10;
        for (int k = 1; k <= 18; k++) {   
            long long divisor = d + 1;  
            if (divisor > n) break;
            if (n % divisor == 0) {
                ans.push_back(n / divisor);
            }
            d *= 10;
        }

        if (ans.size()==0) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (int i=0;i<ans.size();i++) {
                cout << ans[i]<< " ";
            }
            cout << "\n";
        }
    }
}
