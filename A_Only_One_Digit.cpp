#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = 9; 
        while(n > 0){
            int digit = n % 10; 
            m = min(m, digit);  
            n /= 10;           
        }
        cout << m << endl; 
    }
    return 0;
}
