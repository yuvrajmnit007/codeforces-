#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string sty;
        cin>>sty;
        int a=sty[0]-97;
        int b=sty[1]-97;
        int ans=0;
        if(a>b){
            ans=26*a+b-a+1;
        }else{
            ans=26*a+b-a;
        }
        cout<<ans<<endl;
    }
    return 0;
}