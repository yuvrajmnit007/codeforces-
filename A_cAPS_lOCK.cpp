#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    int j=0;
    int m=0;
    int k=st.length();
    if(st[0]<=90 && st[0]>=65){
        m=1;
    }
    for(int i=1;i<k;i++){
        if(st[i]<=90 && st[i]>=65){
            m++;
        }else{
            j++;
        }
    }
    if(m==k){
        for(int i=0;i<k;i++){
            st[i]=tolower(st[i]);
        }
        cout<<st<<endl;
    }else if(m=k-1 ){
        for(int i=0;i<k;i++){
            if(i==0){
                st[0]=toupper(st[0]);
            }
            else{
                st[i]=tolower(st[i]);
            }
        }
        cout<<st<<endl;
    }else{
        cout<<st<<endl;
    }
    return 0;
}