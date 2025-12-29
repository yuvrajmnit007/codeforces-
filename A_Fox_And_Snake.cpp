#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=0;j<k;j++){
            if(i%2==1){
                cout<<"#";
            }if(i%2==0 &&i%4!=0){
                if(j<k-1){
                    cout<<".";
                }
                if(j==k-1){
                    cout<<"#";
                }
            }if(i%4==0){
                if(j==0){
                    cout<<"#";
                }
                if(j>0){
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}