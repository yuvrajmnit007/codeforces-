#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int a = 0, b = 0;
    int i = 0;
    while (i < n && arr[i] == arr[0]) {
        a++;
        i++;
    }
    int j = n - 1;
    while (j >= 0 && arr[j] == arr[n - 1]) {
        b++;
        j--;
    }
    cout << arr[n - 1] - arr[0] << " ";
    if (a == n) {
        long long ans = 1LL * n * (n - 1) / 2;
        cout << ans << endl;
    } else {
        long long ans = 1LL * a * b;
        cout << ans << endl;
    }
    return 0;
}
