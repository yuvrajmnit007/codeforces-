#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int j=n%15;
    if(j==0 or j==1 or j==2){
        cout<<(n)/5+j+1<<endl;
    }else if(n % 15 >= 3 && n % 15 <= 14){
            cout<<(n-n%15)/5+3<<endl;
    }
    }
    return 0;
}