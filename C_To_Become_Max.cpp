#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;
vector<int> a;
bool check(int x) {
		for (int i = 0; i < n; i++) {
				ll cost = 0; 
				for (int j = i, y = x; j < n; j++, y--) {
                    if (y <= a[j]) break;
                    if (j == n - 1) cost += (int)1e9; 
                    else cost += (y - a[j]); 
				}
				if (cost <= k) return true;
		}
		return false;
}
int main() {
		int t;
		cin >> t;
		while (t--) {
				cin >> n >> k;
				a.resize(n);
				for (int i = 0; i < n; i++) {
                        cin >> a[i];
                }
                int l=INT_MIN;
                for(int i=0;i<n;i++){
                    l=max(l,a[i]);
                }
				int r = l + n;
				int ans = l;
				while (l <= r) {
						int mid =l+ (-l + r) / 2;
						if (check(mid)) {
								ans = mid;
								l = mid + 1;
						} else {
								r = mid - 1;
						}
				}

				cout << ans << '\n';
		}
		return 0;
}