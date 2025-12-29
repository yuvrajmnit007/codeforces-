#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<pair<long long, int>> req(n);
        for (int i = 0; i < n; i++) {
            cin >> req[i].first >> req[i].second;
        }
        req.insert(req.begin(), {0, 0});
        long long totalPoints = 0;
        for (int i = 1; i < req.size(); i++) {
            long long prevTime = req[i - 1].first;
            int prevSide = req[i - 1].second;
            long long currTime = req[i].first;
            int currSide = req[i].second;
            long long minutes = currTime - prevTime;
            if (minutes % 2 == (prevSide ^ currSide))
                totalPoints += minutes;      
            else
                totalPoints += minutes - 1;  
        }
        totalPoints += (m - req.back().first);
        cout << totalPoints << "\n";
    }
}
