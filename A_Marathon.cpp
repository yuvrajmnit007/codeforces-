#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int j=0;
        if(a<b){
            j++;
        }
        if(a<c){
            j++;
        }
        if(a<d){
            j++;
        }
        cout<<j<<endl;
    }
    return 0;
}