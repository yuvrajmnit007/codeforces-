#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        long long k;
        cin >> k;
        long long sum = k * (k + 1) / 2;
        for (long long power = 1; power <= k; power *= 2) {
            sum -= 2*power;
        }

        cout << sum << endl;
    }

    return 0;
}
