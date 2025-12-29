#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int c=0;
        int q=x;
         if(x==1){
            if(n%2==1){
                cout<<n<<endl;
            }else{
                cout<<n+3<<endl;
            }
            continue;
        }
        if(x==0){
            if(n==1){
                cout<<-1<<endl;
            }else if(n%2==1){
                cout<<n+3<<endl;
            }else{
                cout<<n<<endl;
            }
            continue;
        }
        while(q>0){
            if(q%2==1){
                c++;
            }
            q=q/2;
        }
        if(n<=c){
            cout<<x<<endl;
            continue;
        }
        if(n>c){
            if((n-c)%2==0){
                cout<<x+n-c<<endl;
            }else{
                cout<<n+x-c+1<<endl;
            }
            continue;
        }
    }
    return 0;
}