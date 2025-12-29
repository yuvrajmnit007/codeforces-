#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin>>n;
    cin>>k;
    long long t = (n + 1) / 2;
    if (k <= t) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - t) << endl;
    }

    return 0;
}
