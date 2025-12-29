#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,c,p,q,r;
        cin>>n>>a>>b>>c;
        q=0;
        r=n/(a+b+c);
        p=n%(a+b+c);
        if(p>0){
            q=1;
        }
        if(p-a>0){
            q=2;
        }
        if(p-a-b>0){
            q=3;
        }
        cout<<(3*r)+q<<endl;
    }
    return 0;
}