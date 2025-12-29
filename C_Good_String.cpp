#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    string st1;
    st1.push_back(st[0]);
    for (int i = 1; i < n; i++) {
        if (st1.size() % 2 == 1) {
            if (st[i] != st1.back()) {
                st1.push_back(st[i]);
            }
        } else {
            st1.push_back(st[i]);
        }
    }
    if (st1.size() % 2 == 1) {
        st1.pop_back();
    }

    cout << n - st1.size() << endl;
    cout << st1 << endl;

    return 0;
}
