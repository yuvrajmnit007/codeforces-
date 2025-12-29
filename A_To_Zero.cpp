#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        int k;
        cin>>n;
        cin>>k;
        if(n%2!=0){
            if((n-k)%(k-1)==0){
                cout<<(n-k)/(k-1)+1<<endl;
            }else{
                cout<<(n-k)/(k-1)+2<<endl;
            }
        }else{
            if((n)%(k-1)==0){
                cout<<n/(k-1)<<endl;
            }else{
                cout<<n/(k-1)+1<<endl;
            }
        }
    }
    return 0;
}