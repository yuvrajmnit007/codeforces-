#include<iostream>
using namespace std;
int main() {
    string arr[] = {"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"};
    
    string st;
    int n;
    cin >> st;
    cin >> n;

    int t = 0;

    for (int i = 0; i < 12; i++) {
        if (st == arr[i]) {
            t = i;
            break;
        }
    }
    int k = (t + n) % 12;
    cout << arr[k] << endl;

    return 0;
}
