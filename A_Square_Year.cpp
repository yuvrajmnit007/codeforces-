#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k =sqrt(n);
        if(n==0){
            cout << "0" << " " << "0" << endl;
        }
        if(k!=0 && k * k == n && n % k == 0){
            cout << "0" << " " << k  << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
