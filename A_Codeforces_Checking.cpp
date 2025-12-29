#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        char ch;
        cin>>ch;
        string str;
        str="codeforces";
        int l=0;
        for(int i=0;i<str.length();i++){
            if(ch==str[i]){
                l++;
            }
        }
        if(l>=1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}