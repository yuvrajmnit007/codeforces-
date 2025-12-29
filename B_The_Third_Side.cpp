#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> k(n);  
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> k[i];
            sum += k[i];
        }

        cout << sum - n + 1 << endl;  
    }
    return 0;
}

