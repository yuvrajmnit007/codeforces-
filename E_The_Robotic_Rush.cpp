#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        for (int i=0;i<n;i++) {
            cin >>a[i];
        }
        unordered_set<int>b;
        b.reserve(m*2);
        for (int i=0;i <m;i++) {
            int x;
            cin >>x;
            b.insert(x);
        }
        string st;
        cin >> st;
        vector<int> alive;
        alive.reserve(n);
        for (int i = 0; i < n; i++) alive.push_back(i);

        int offset = 0;

        for (char c : st) {
            if (c == 'L') offset--;
            else offset++;

            vector<int> next_alive;
            next_alive.reserve(alive.size());

            for (int idx : alive) {
                int cur = a[idx] + offset;
                if (b.find(cur) == b.end()) {
                    next_alive.push_back(idx);
                }
            }

            alive.swap(next_alive);
            cout << alive.size() << " ";
        }
        cout << "\n";
    }
    return 0;
}
