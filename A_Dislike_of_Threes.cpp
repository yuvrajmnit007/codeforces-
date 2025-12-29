#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int j=0;
        int p;
        for(int i=1;i<2000;i++){
            if(i%3!=0 && i%10!=3){
                p=i;
                j++;
                if(j==t){
                    break;
                }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}