#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, px, py, qx, qy;
        cin >> n >> px >> py >> qx >> qy;

        int arr[n], sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int distSq = (px - qx) * (px - qx) + (py - qy) * (py - qy);
        int sumSq = sum * sum;

        if(sumSq < distSq) {
            cout << "No" << endl;
        } else if(sumSq == distSq) {
            cout << "Yes" << endl;
        } else {
            if(n >= 3) {
                cout << "Yes" << endl;
            } else if(n == 2) {
                if(distSq == 0) {
                    cout << (arr[0] == arr[1] ? "Yes" : "No") << endl;
                } else {
                    cout << "Yes" << endl;
                }
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
