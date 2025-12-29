#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int t = k%10;
        int m = (k-t)/10;
        cout<<m+t<<endl;
    }
    return 0;
}