#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum[7] = {0};
    for(int i = 0; i < 7; i++) {
        int total = 0;
        for(int j = 0; j < n; j++) {
            int temp = arr[j];
            for(int k = 0; k < i; k++) {
                temp /= 10;
            }
            total += temp % 10;
        }
        sum[i] = total;
    }

    int max = sum[0];
    for(int i = 1; i < 7; i++) {
        if(sum[i] > max) {
            max = sum[i];
        }
    }

    cout << max << endl;

    return 0;
}
