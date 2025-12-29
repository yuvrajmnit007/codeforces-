#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string st;
        cin>>st;
        if(st.length()!=5){
            cout<<"NO"<<endl;
        }else{
            int p=1;
            for(int i=1;i<6;i++){
                if(st[i-1]=='T'){
                    p=p*7;
                }
                if(st[i-1]=='r'){
                    p=p*2;
                }
                if(st[i-1]=='i'){
                    p=p*3;
                }
                if(st[i-1]=='m'){
                    p=p*11;
                }
                if(st[i-1]=='u'){
                    p=p*5;
                }
            }
            if(p==2310){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}