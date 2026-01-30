#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        map<int, int> help;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            int r = b[i] % k;
            help[min(r, k - r)]++;
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int r = a[i] % k;
            help[min(r, k - r)]--;
            if(help[min(r, k - r)]<0){
                flag=false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}