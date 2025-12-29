#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int t=240-k;
    int l=0;
    for(int i=1;i<=n;i++){
        t=t-5*i;
        if(t>=0){
            l++;
        }
    }
    cout<<l<<endl;
    return 0;
}