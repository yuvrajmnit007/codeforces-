#include<iostream>
using namespace std;

int main() {
    string st, k;
    cin >> k >> st; 
    string st1 = "qwertyuiop";
    string st2 = "asdfghjkl;";
    string st3 = "zxcvbnm,./"; 
    int p = st.length();
    string st4(p, ' '); 
    if (k == "R") {
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < st1.length(); j++) {
                if (st[i] == st1[j]) {
                    st4[i] = st1[j - 1];
                    break;
                }
                if (st[i] == st2[j]) {
                    st4[i] = st2[j - 1];
                    break;
                }
                if (st[i] == st3[j]) {
                    st4[i] = st3[j - 1];
                    break;
                }
            }
        }
    }
    if (k == "L") {
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < st1.length(); j++) {
                if (st[i] == st1[j]) {
                    st4[i] = st1[j + 1]; 
                    break;
                }
                if (st[i] == st2[j]) {
                    st4[i] = st2[j + 1];
                    break;
                }
                if (st[i] == st3[j]) {
                    st4[i] = st3[j + 1];
                    break;
                }
            }
        }
    }
    cout << st4 << endl;
    return 0;
}
