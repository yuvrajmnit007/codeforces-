#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }else{
        
        int p,q;
        p=n%10;
        q=((n-p)/10)%10;
        if((n-p)/10<(((n-p)/10)-q)+p){
            cout<<((((n-p)/10)-q)+p)<<endl;
        }else{
            cout<<(n-p)/10<<endl;
        }
    }
    return 0;
}
