#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
            cout<<"I hate it";
            return 0;
        }
    for(int i=1;i<=n;i++){
        if(i%2==0 and i<n ){
            cout<<"I love that"<<" ";
        }
        if(i%2==1 and i<n ){
            cout<<"I hate that"<<" ";
        }
        if(i%2==0 and i==n){
            cout<<"I love it"<<" ";
        }
        if(i%2==1 and i==n){
            cout<<"I hate it"<<" ";
        }
    }
    cout<<endl;
    return 0;
}