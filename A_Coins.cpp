#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int a,b;
        a=n%10;
        b=k%10;
        if(a%2==0){
            cout<<"YES"<<endl;
        }else{
            if(k%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}