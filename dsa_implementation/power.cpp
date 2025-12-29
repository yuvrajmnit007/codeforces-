#include<iostream>
using namespace std;
int pow(int a,int n){
    if(n==1){
        return a;
    }else{
        int mid=(n)/2;
        int c=pow(a,mid);
        int d=c*c;
    
    }
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n)<<endl;
    return 0;
}