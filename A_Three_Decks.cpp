#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        int k;
        k=sum%3;
        if(k==0){
            if(a<=sum/3 && b<=sum/3){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}