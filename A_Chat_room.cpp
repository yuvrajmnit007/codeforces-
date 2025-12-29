#include<iostream>
using namespace std;
int main(){
    string st;
    int h,j,k,l;
    int m=0;
    cin>>st;
    for(int i=0;i<st.length();i++){
        if(st[i]=='h'){
            h=i;
            m++;
            break;
        }
    }
    for(int i=h+1;i<st.length();i++){
        if(st[i]=='e'){
            j=i;
            m++;
            break;
        }
    }
    for(int i=j+1;i<st.length();i++){
        if(st[i]=='l'){
            k=i;
            m++;
            break;
        }
    }
    for(int i=k+1;i<st.length();i++){
        if(st[i]=='l'){
            l=i;
            m++;
            break;
        }
    }
    for(int i=l+1;i<st.length();i++){
        if(st[i]=='o'){
            l=i;
            m++;
            break;
        }
    }
    if(m==5){
        cout<<"YES"<<endl;

    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}