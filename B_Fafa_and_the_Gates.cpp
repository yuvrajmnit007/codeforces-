#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    int x = 0, y = 0;
    int pay = 0;

    for (int i = 0; i < n - 1; i++) {
        if (st[i] == 'U') {
            y++;
        } else {
            x++;
        }

        if (x == y) {
            if (st[i + 1] == st[i]) {
                pay++;
            }
        }
    }

    cout << pay << endl;
    return 0;
}
