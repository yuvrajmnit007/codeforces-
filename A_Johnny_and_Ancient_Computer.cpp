#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;
        long long p,q;
        if(a>=b){
            q=a;
            p=b;
        }else{
            q=b;
            p=a;
        }
        if(q%p!=0){
            cout<<-1<<endl;
        }
        else{
            long long m=q/p;
            int count =0;
            while(m%8==0){
                m=m/8;
                count++;
            }
            while(m%4==0 ){
                m=m/4;
                count++;
            }
            while(m%2==0 ){
                m=m/2;
                count++;
            }
            if(m==1){
                cout<<count<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}