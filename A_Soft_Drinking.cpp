#include<iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,b,t;
    a=k*l/nl;
    b=c*d;
    t=p/np;
    if(a<=b && a<=t){
        cout<<a/n<<endl;
        return 0;
    }
    if(b<=a && b<=t){
        cout<<b/n<<endl;
        return 0;
    }
    if(t<=a && t<=b){
        cout<<t/n<<endl;
        return 0;
    }
}