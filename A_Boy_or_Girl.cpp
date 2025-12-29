#include<iostream>
#include<set>
using namespace std;
int main(){
    string a;
    cin>>a;
    set<char> letterset(a.begin(),a.end());
    if(letterset.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}