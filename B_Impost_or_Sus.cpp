#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        int count=0;
        if(st[0]=='u'){
            count++;
            st[0]='s';
        }
        for(int i=1;i<st.size()-1;i++){
            if(st[i]=='u'){
                if(st[i+1]!='s'){
                    count++;
                    st[i+1]='s';
                }
            }
        }
        if(st[st.size()-1]=='u'){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
