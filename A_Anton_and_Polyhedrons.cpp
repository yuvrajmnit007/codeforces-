#include<iostream>
using namespace std;

int main() {
    int sum = 0;  
    int n;
    cin >> n;

    while (n--) {
        string st;
        cin >> st;

        if (st == "Tetrahedron") {
            sum += 4;
        }
        else if (st == "Cube") {
            sum += 6;
        }
        else if (st == "Octahedron") {
            sum += 8;
        }
        else if (st == "Dodecahedron") {
            sum += 12;
        }
        else if (st == "Icosahedron") {
            sum += 20;
        }
    }

    cout << sum << endl;
    return 0;
}
