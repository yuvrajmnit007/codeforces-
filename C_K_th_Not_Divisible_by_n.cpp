#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int p,q;
        p=b/(a-1);
        q=b%(a-1);
        if(q==0){
            cout<<p*a-1<<endl;
        }
        if(q!=0){
            cout<<p*a+q<<endl;
        }
    }
    return 0;
}
