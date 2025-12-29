#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    string st1,st2;
    cin >> st1>>st2;
    int h1 = stoi(st1.substr(0, 2));
    int m1 = stoi(st1.substr(3, 2));
    int h2 = stoi(st2.substr(0, 2));
    int m2 = stoi(st2.substr(3, 2));
    h1 +=24;
    int h,m;
    h=h1-h2;
    m=m1-m2;
    if(m<0){
        m=m+60;
        h--;
    }if(h>23){
        h=h-24;
    }
    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << endl;

    return 0;
}
