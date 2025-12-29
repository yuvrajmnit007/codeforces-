#include<iostream>
#include<set>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n=st.length();
    int j=0;
    for(int i=0;i<n;i++){
        if((st[i]!='7') && (st[i]!='4')){
            j++;
        }
    }
    if(n-j==4 or n-j==7 or n-j==14 or n-j==17){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}