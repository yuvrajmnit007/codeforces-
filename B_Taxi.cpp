#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> count(5, 0); 

    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        count[s]++;
    }

    int taxis = count[4]; 

    
    int match_3_1 = min(count[3], count[1]);
    taxis += count[3];
    count[1] -= match_3_1;


    taxis += count[2] / 2;
    if (count[2] % 2) {
        taxis++; 
        count[1] -= min(2, count[1]); 
    }

    
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4; 
    }

    cout << taxis << endl;

    return 0;
}
