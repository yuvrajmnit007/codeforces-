#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=0;
    while(n--){
        int a,b;
        cin>>a;
        cin>>b;
        if(b-a>=2){
            j++;
        }
    }
    cout<<j<<endl;
    return 0;
}