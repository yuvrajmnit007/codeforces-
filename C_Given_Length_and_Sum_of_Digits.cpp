#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    if((s==0&&m>1)||s>m*9){
        cout<<"-1 -1"<<endl;
        return 0;
    }
    else{
        string mn;
        for(int i=m;i>=1;i--){
            int dig=max(s-(i-1)*9,0);
            mn.push_back('0'+dig);
            s-=dig;
        }
        string mx=mn;
        reverse(mx.begin(),mx.end());
        if(mn[0]=='0'){
            for(int i=0;i<mn.size();i++){
                if(mn[i]!='0'){
                    mn[i]--;
                    mn[0]='1';
                    break;
                }
            }
        }
        cout<<mn<<" "<<mx<<endl;
        return 0;
    }
}