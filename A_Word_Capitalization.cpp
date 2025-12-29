#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    char a=st[0];
    int t=st.size();
    for(int i=0;i<t;i++){
       st[0]=toupper(st[0]);
       st[i]=st[i];
    }
    cout<<st<<endl;
    return 0;
}