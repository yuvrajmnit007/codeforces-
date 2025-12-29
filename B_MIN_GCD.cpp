#include <bits/stdc++.h>
using namespace std;

long long my_gcd(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long long g=0;
        for(int i=1;i<n;i++){
            if(arr[i]%arr[0]==0){
                  g=my_gcd(arr[i],g);
            }
        }
        cout<<(g==arr[0]? "Yes":"No")<<endl;
    }
    return 0;
}
