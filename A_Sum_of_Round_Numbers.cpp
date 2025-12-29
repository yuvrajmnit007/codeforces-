#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int k;
        cin >> k;
        int t = 1;
        set<int> mySet;

        while (k > 0) {
            int digit = k % 10;
            if (digit != 0) {
                mySet.insert(digit * t);
            }
            k /= 10;
            t *= 10;
        }

        cout << mySet.size() << endl;
        for (auto it = mySet.begin(); it != mySet.end(); ++it) {
            cout << *it;
            if (next(it) != mySet.end()) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
