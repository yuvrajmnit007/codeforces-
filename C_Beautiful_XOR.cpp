#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        int msba,msbb;
        msba=(int)log2(a);
        msbb=(int)log2(b);
        if(msbb>msba){
            cout<<-1<<endl;
            continue;
        }else{
            if(msbb==msba){
                cout<<1<<endl;
                cout<<(a^b)<<endl;
            }else{
                int p=pow(2,msba);
                cout<<2<<endl;
                cout<<(a^(p+b))<<" "<<p<<endl;
            }
        }
    }
    return 0;
}