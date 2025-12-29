#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> arr1(n), arr2(n);

        for (int i = 0; i < n; i++) cin >> arr1[i];
        for (int i = 0; i < n; i++) cin >> arr2[i];

        vector<pair<int, int>> help; 
        for (int i = 0; i < n; i++) {
            if (arr2[i] < p) {
                help.push_back({arr2[i], arr1[i]});
            }
        }
        sort(help.begin(), help.end());  
        long long cost = p;
        int rem = n - 1;
        if (rem <= 0) {
            cout << p << endl;
            continue;
        }
        for (int i = 0; i < help.size(); i++) {
            int b = help[i].first;   
            int a = help[i].second;  
            if (rem <= a) {
                cost += 1LL * rem * b;
                rem = 0;
                break;
            }
            rem -= a;
            cost += 1LL * b * a;
        }

        if (rem > 0) cost += 1LL * rem * p;

        cout << cost << endl;
    }
    return 0;
}
