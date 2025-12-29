#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool diff(const string& s) {
    return s.find("FFT") != string::npos || s.find("NTT") != string::npos;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (!diff(s)) {
            cout << s << '\n';
        } else {
            bool found = false;
            for (int i = 0; i < s.size(); ++i) {
                string rotate = s.substr(i) + s.substr(0, i);
                if (!diff(rotate)) {
                    cout << rotate << '\n';
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << s << '\n';
            }
        }
    }
    return 0;
}
