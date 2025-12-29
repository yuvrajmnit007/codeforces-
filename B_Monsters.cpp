#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<pair<long long,int>> v; 
        //ye leetcode 3318 ki jese hi karna he ki pahle sabka mod leke fir sort kar do on the basis of freq and freq equal ho jati he then on the basis of value 
        for(int i=0;i<n;i++){
            long long turns = (arr[i]) % k; 
            if (turns==0)
				turns= k;
            v.push_back({turns, i+1});
        }
        sort(v.begin(), v.end(), [&](auto &a, auto &b){
            if(a.first != b.first) return a.first > b.first; 
            return a.second < b.second;
        });
        for(int i=0;i<v.size();i++) cout << v[i].second << " ";
        cout << endl;
    }
    return 0;
}
