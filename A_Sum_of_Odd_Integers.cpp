#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a >= b * b && a % 2 == b % 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
