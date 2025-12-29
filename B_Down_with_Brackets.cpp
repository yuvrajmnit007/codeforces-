#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        int k=str.length();
        int p=0;
        int q=0;
        for(int i=0;i<k;i++){
            if(str[i]=='('){
                p++;
            }else{
                q++;
            }
        }
        if(p!=q){
            cout<<"NO"<<endl;
        }else{
            int temp=q;
            for(int i=0;i<(k+1)/2;i++){
                if(str[i]=='('){
                    p--;
                }else{
                    q--;
                }
            }
            if(p==0 && q==temp){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}