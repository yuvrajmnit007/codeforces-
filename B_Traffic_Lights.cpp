#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;

    double t = d / v;  
    double cycle = g + r;
    double time_in_cycle = fmod(t, cycle);
    double wait_time = 0;
    if (time_in_cycle >= g) {
        wait_time = cycle - time_in_cycle;
    }

    double total_time = t + wait_time + (l - d) / v;
    cout << fixed << setprecision(8) << total_time << endl;

    return 0;
}
