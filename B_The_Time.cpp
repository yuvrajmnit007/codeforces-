#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    string st;
    cin >> st;
    int k;
    cin >> k;
    int h = stoi(st.substr(0, 2));
    int m = stoi(st.substr(3, 2));
    h += k / 60;
    m += k % 60;
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }
    h %= 24;
    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << endl;

    return 0;
}
