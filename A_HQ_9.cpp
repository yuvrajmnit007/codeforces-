#include<iostream>
using namespace std;
int main(){
    string st;
    char H,Q;
    cin>>st;
    for(int i=0;i<st.length();i++){
        if(st.find("H")<st.length() or st.find("Q")<st.length() or st.find("9")<st.length()){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}