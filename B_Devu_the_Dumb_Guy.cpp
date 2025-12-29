#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long time = 0; 
    for (int i = 0; i < n; i++) {
        time += 1LL * arr[i] * x; 
        if (x > 1) x--;           
    }

    cout << time << endl;
    return 0;
}
