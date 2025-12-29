#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        int k=0;
        int p=0;
        for(int i=0;i<st.length();i++){
            if(st[i]=='0'){
                k++;
            }
            if(st[i]=='1'){
                p++;
            }
        }
        if(k>=p){
            if(p%2==0){
                cout<<"NET"<<endl;
            }
            else{
                cout<<"DA"<<endl;
            }
        }else{
            if(k%2==0){
                cout<<"NET"<<endl;
            }
            else{
                cout<<"DA"<<endl;
            }
        }
    }
    return 0;
}