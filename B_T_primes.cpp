#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000000;
bool is_prime[MAX + 1];

void sieve() {
    for (int i = 0; i <= MAX; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();

    long long n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        long long p = sqrt(arr[i]);
        if (p * p == arr[i] && arr[i] > 1) {
            if (is_prime[p]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
