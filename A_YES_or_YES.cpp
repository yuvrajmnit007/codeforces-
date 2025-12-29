#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string st;
        cin>>st;
        bool ans=true;
        int t=st.size();
        for(int i=1;i<t;i++){
            if(st[i-1]=='Y'&&st[i]=='Y'){
                ans=false;
                break;
            }
        }
        if(ans==true){
            int count=0;
            for(int i=0;i<t;i++){
                if(st[i]=='Y'){
                    count++;
                }
            }
            if(count>=2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
