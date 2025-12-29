#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        int rep=0;
        for(int i=0;i<t.size();i++){
            if(t[i]=='a'){
                rep++;
            }
        }
        if(rep==0){
            long long ans=1;
            for(int i=0;i<s.size();i++){
                ans*=2;
            }
            cout<<ans<<endl;
        }else if(rep==1 && t.size()==1){
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}