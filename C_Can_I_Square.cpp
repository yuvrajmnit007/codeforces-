#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        vector<int> arr(a);

        long long sum = 0; 
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
            sum += arr[i]; 
        }

        long long root = sqrt(sum); 
        if (root * root == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
