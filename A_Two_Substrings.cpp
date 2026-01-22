#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int ab=0,ba=0;
    int a,b;
    for(int i=1;i<st.size();i++){
        if(st[i]=='B'&&st[i-1]=='A'){
            ab++;
            a=i-1;
        }
        if(st[i]=='A'&&st[i-1]=='B'){
            ba++;
            b=i-1;
        }
    }
    if((ab>1&&ba>1)){
        cout<<"YES"<<endl;
    }else{
        if(ab==0||ba==0){
            cout<<"NO"<<endl;
        }else{
            if(abs(b-a)==1){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}