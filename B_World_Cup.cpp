#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long ans = 0;
    long long minTime = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        long long rounds = (a[i] - i + n - 1) / n;
        if (a[i] - i < 0) rounds = 0; 
        long long totalTime = rounds * n + i;
        if (totalTime < minTime) {
            minTime = totalTime;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
