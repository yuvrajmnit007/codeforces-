#include <iostream>
using namespace std;
bool isPowerOfTwo(long long n) {
    return (n > 1) && ((n & (n - 1)) == 0);
}
bool hasOddDivisor(long long num) {
    return !isPowerOfTwo(num);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin >> num;
        if (hasOddDivisor(num)) {
            cout <<"YES"<<endl;
        } else {
            cout <<"NO"<<endl;
        }
    }
 
    return 0;
}