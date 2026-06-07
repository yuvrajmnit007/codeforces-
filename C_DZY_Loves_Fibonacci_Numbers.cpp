#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD = 1e9 + 9;
vector<int> segtree, fib, arr;
vector<pair<int,int>> lazy;
int fibVal(int a, int b, int k) {
    if (k == 1) return a % MOD;
    if (k == 2) return b % MOD;
    return (b * fib[k-1] + a * fib[k-2]) % MOD;
}
int fibSum(int a, int b, int len) {
    return (a * fib[len] + b * ((fib[len+1] - 1 + MOD) % MOD)) % MOD;
}

void build(int idx, int l, int r) {
    if (l == r) { segtree[idx] = arr[l] % MOD; return; }
    int mid = (l + r) / 2;
    build(2*idx+1, l, mid);
    build(2*idx+2, mid+1, r);
    segtree[idx] = (segtree[2*idx+1] + segtree[2*idx+2]) % MOD;
}
void update(int start, int end, int idx, int l, int r) {
    if (lazy[idx].first != 0 || lazy[idx].second != 0) {
        int la = lazy[idx].first, lb = lazy[idx].second;
        segtree[idx] = (segtree[idx] + fibSum(la, lb, r - l + 1)) % MOD;
        if (l != r) {
            int llen = (l + r) / 2 - l + 1;
            lazy[2*idx+1].first  = (lazy[2*idx+1].first  + la) % MOD;
            lazy[2*idx+1].second = (lazy[2*idx+1].second + lb) % MOD;
            lazy[2*idx+2].first  = (lazy[2*idx+2].first  + fibVal(la, lb, llen + 1)) % MOD;
            lazy[2*idx+2].second = (lazy[2*idx+2].second + fibVal(la, lb, llen + 2)) % MOD;
        }
        lazy[idx] = {0, 0};
    }
    if (start > r || end < l) return;
    if (start <= l && r <= end) {
        int la = fibVal(1, 1, l - start + 1);
        int lb = fibVal(1, 1, l - start + 2);
        segtree[idx] = (segtree[idx] + fibSum(la, lb, r - l + 1)) % MOD;
        if (l != r) {
            int llen = (l + r) / 2 - l + 1;
            lazy[2*idx+1].first  = (lazy[2*idx+1].first  + la) % MOD;
            lazy[2*idx+1].second = (lazy[2*idx+1].second + lb) % MOD;
            lazy[2*idx+2].first  = (lazy[2*idx+2].first  + fibVal(la, lb, llen + 1)) % MOD;
            lazy[2*idx+2].second = (lazy[2*idx+2].second + fibVal(la, lb, llen + 2)) % MOD;
        }
        return;
    }
    int mid = (l + r) / 2;
    update(start, end, 2*idx+1, l, mid);
    update(start, end, 2*idx+2, mid+1, r);
    segtree[idx] = (segtree[2*idx+1] + segtree[2*idx+2]) % MOD;
}
int query(int start, int end, int idx, int l, int r) {
    if (lazy[idx].first != 0 || lazy[idx].second != 0) {
        int la = lazy[idx].first, lb = lazy[idx].second;
        segtree[idx] = (segtree[idx] + fibSum(la, lb, r - l + 1)) % MOD;
        if (l != r) {
            int llen = (l + r) / 2 - l + 1;
            lazy[2*idx+1].first  = (lazy[2*idx+1].first  + la) % MOD;
            lazy[2*idx+1].second = (lazy[2*idx+1].second + lb) % MOD;
            lazy[2*idx+2].first  = (lazy[2*idx+2].first  + fibVal(la, lb, llen + 1)) % MOD;
            lazy[2*idx+2].second = (lazy[2*idx+2].second + fibVal(la, lb, llen + 2)) % MOD;
        }
        lazy[idx] = {0, 0};
    }
    if (start > r || end < l) return 0;
    if (start <= l && r <= end) return segtree[idx];
    int mid = (l + r) / 2;
    return (query(start, end, 2*idx+1, l, mid) +
            query(start, end, 2*idx+2, mid+1, r)) % MOD;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    arr.resize(n + 1);
    for (int i = 1; i <=n; i++) cin >> arr[i];
    fib.resize(n + 3);
    fib[0] = 0; fib[1] = 1; fib[2] = 1;
    for (int i = 3; i <= n + 2; i++){
        fib[i] = (fib[i-1] + fib[i-2]) % MOD;
    }
    segtree.resize(4 * (n + 1), 0);
    lazy.resize(4 * (n + 1), {0, 0});
    build(0, 1, n);
    while (m--) {
        int p, l, r;
        cin >> p >> l >> r;
        if (p == 1) update(l, r, 0, 1, n);
        else cout << query(l, r, 0, 1, n) << "\n";
    }
    return 0;
}