#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int k=st.length();
        int t=0;
        if(st[0]=='1'){
            for(int i=1;i<k;i++){
                if(st[i]=='1'){
                    t++;
                }
            }
            cout<<t<<endl;
        }else if(st[k-1]=='1' && st[0]!='1'){
             for(int i=0;i<k-1;i++){
                if(st[i]=='1'){
                    t++;
                }
            }
                cout<<t<<endl;
        }else{
            for(int i=1;i<k-1;i++){
                if(st[i]=='1'){
                    t++;
                }
            }
                cout<<t<<endl;
    }
    }
    return 0;
}
