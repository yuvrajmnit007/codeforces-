#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        int k=st.length();
        string st1[k];
        for(int i=0;i<k;i++){
            if(st[i]=='p'){
                st1[i]='q';
            }
            else if(st[i]=='q'){
                st1[i]='p';
            }
            else{
                st1[i]='w';
            }
        }
        for(int i=k-1;i>=0;i--){
            cout<<st1[i];
        }
        cout<<endl;
    }
    return 0;
}