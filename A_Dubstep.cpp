#include<iostream>
using namespace std;

int main() {
    string st;
    char W = 'W', U = 'U', B = 'B';
    cin >> st;

    bool spacePrinted = false; 

    for (int i = 0; i < st.length(); i++) {
        if (st[i] == W && st[i+1] == U && st[i+2] == B) {
            if (!spacePrinted) {
                cout << " ";
                spacePrinted = true;
            }
            i = i + 2;
        } else {
            cout << st[i];  
            spacePrinted = false;  
        }
    }

    cout << endl;
    return 0;
}
