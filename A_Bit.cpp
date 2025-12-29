#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int m=0;
    while(t--){
        string st;
        cin>>st;
        if(st=="X++"|| st=="++X"){
            m=m+1;
        }else if(st=="--X" || st=="X--"){
            m=m-1;
        }
    }
    cout<<m<<endl;
    return 0;
}