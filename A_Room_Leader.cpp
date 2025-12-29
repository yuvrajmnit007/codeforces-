#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr2[100];
    int arr[100];     

    for (int i = 0; i < n; i++) {
        string handle;
        int plus, minus, a, b, c, d, e;
        cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;
        arr[i] = 100 * plus + a + b + c + d + e - 50 * minus;
        arr2[i] = handle;
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << arr2[maxIndex] << endl;
    return 0;
}
