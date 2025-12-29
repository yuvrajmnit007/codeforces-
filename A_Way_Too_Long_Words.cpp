#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    for (int i=0;i<n;i++){
        cin>>st;
        if(st.size()>10){
            cout<<st[0]<<st.size()-2<<st[(st.size()-1)]<<endl;
        }else{
            cout<<st<<endl;
        }
    }
    return 0;
}