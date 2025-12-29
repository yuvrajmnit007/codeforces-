#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hours = 0;
    int stubs = 0;

    while (a > 0) {
        hours += a; 
        stubs += a;         
        a = stubs / b;      
        stubs = stubs % b;  
    }

    cout << hours << endl;
    return 0;
}
