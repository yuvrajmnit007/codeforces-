#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<(24-a-1)*60+60-b<<endl;
    }
    return 0;
}