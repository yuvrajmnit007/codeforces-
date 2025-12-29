#include <iostream>
#include <numeric>  // for std::gcd
using namespace std;

typedef long long ll;

ll ceil_div(ll a, ll b) {
    return (a + b - 1) / b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, k;
        cin >> a >> b >> k;

        ll g = std::gcd(a, b);  // Use std::gcd here
        ll ans = ceil_div(g, k);

        cout << ans << '\n';
    }
    return 0;
}
