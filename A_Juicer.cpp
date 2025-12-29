#include <iostream>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;

    int cnt = 0;     
    int waste = 0;   

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= b) {
            waste += a;
            if (waste > d) {
                cnt++;
                waste = 0;  
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
