#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,x;
        cin>>m>>x;
        string st;
        cin>>st;
        vector<int>help(256,0);
        for(int i=0;i<m;i++){
            help[st[i]]++;
        }
        int p=x;
        for(int i=0;i<256;i++){
            if(help[i]%2!=0){
                p--;
            }
        }
        if(p<-1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}