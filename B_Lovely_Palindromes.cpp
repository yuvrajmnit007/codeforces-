#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    int k=st.length();
    cout<<st;
    for(int i=0;i<k;i++){
        cout<<st[k-i-1];
    }
    cout<<endl;
    return 0;
}