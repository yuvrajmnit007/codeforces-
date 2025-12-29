#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int len=a/(b+1);
        int help=a%(b+1);
        string st;
        for(int i=0;i<b+1;i++){
            for(int j=0;j<len;j++){
                st+='R';
            }
            if(help>0){
                st+='R';
                help--;
            }
            if(i!=b){
                st+='B';
            }
        }
        cout<<st<<endl;
    }
    return 0;
}