#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int a = 0;
        int i = 0;
        while (i < n && st[i] == '0') {
            a++;
            i++;
        }
        if (i == n) {
            cout << a << '\n';
            continue;
        }
        long long b = 0; 
        int c = 0;      
        for (int j = i; j < n; ++j) {
            if (st[j] == '0') {
                c++;
            } else { 
                b += max(0, c - k);
                c = 0;
            }
        }
        b += max(0, c - k);
        cout << (b + a) << endl;
    }
    return 0;
}
