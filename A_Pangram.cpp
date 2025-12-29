#include<iostream>
using namespace std;
#include<set>
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    set<char>myset;
    for(int i=0;i<n;i++){
        st[i]=tolower(st[i]);
    }
    for(int i=0;i<n;i++){
        myset.insert(st[i]);
    }
    if(myset.size()==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}