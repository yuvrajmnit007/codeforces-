#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string temp;
        getline(cin, temp);

        vector<string> grid(8);
        for (int i = 0; i < 8; ++i) {
            getline(cin, grid[i]);
        }

        bool found = false;
        for (int i = 0; i < 8; ++i) {
            if (grid[i] == "RRRRRRRR") {
                cout << "R" << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "B" << endl;
        }
    }
    return 0;
}