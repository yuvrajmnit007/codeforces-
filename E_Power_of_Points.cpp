#include <iostream>
#include <algorithm>
using namespace std;

int bs(long long arr[], int i, int j, long long target) {
    if (i > j) return -1;
    int mid = i + (j - i) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return bs(arr, i, mid - 1, target);
    } else {
        return bs(arr, mid + 1, j, target);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        long long arr1[n];
        long long prefix[n];

        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr1[i] = arr[i];
            total_sum += arr[i];
        }

        sort(arr1, arr1 + n);
        prefix[0] = arr1[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + arr1[i];
        }

        for (int i = 0; i < n; i++) {
            int k = bs(arr1, 0, n - 1, arr[i]);
            long long prefix_sum = (k > 0) ? prefix[k - 1] : 0;
            long long result = (total_sum + n - prefix_sum)  - (n - k) * arr1[k] + k * arr1[k]  - prefix_sum ;
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}
