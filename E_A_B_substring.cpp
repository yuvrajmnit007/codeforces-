#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<long long> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int i, long long v) {
        for (++i; i <= n; i += i & -i)
            bit[i] += v;
    }

    long long query(int i) {
        long long s = 0;
        for (++i; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }
};

int main() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    vector<int> pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i];
        if (st[i] == 'A') pref[i + 1]++;
        else if (st[i] == 'B') pref[i + 1]--;
    }
    vector<int> comp = pref;
    sort(comp.begin(), comp.end());
    comp.erase(unique(comp.begin(), comp.end()), comp.end());

    Fenwick fw(comp.size());

    long long ans = 0;

    for (int i = 0; i <= n; i++) {
        int idx = lower_bound(comp.begin(), comp.end(), pref[i]) - comp.begin();
        ans += fw.query(idx - 1);  
        fw.update(idx, 1);
    }

    cout << ans << endl;
    return 0;
}
