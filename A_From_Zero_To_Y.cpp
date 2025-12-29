#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int q=y/x;
        int j=0;
        while(q>0){
            j=j+q%10;
            q=q/10;
        }
        cout<<j+y%x<<endl;
    }
    return 0;
}