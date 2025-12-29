#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    int m=0;
    cin>>k;
    cin>>n;
    cin>>w;
    int sum=0;
    for(int i=0;i<=w;i++){
        sum+=i;
    }
    if(k*sum>=n){
        cout<<k*sum-n<<endl;
    }else{
        cout<<m<<endl;
    }
    return 0;
}