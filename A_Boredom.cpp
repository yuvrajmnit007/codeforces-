#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<long long> freq(100001, 0);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<long long> gain(100001, 0);
    for(int i = 1; i <= 100000; i++){
        gain[i] = i * freq[i];
    }
    long long prev2 = 0;
    long long prev1 = gain[1];

    for(int i = 2; i <= 100000; i++){
        long long pick = gain[i] + prev2;
        long long notpick = prev1;
        long long curr = max(pick, notpick);
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << endl;
    return 0;
}
