#include<iostream>
using namespace std;
int main(){
    int n,t;
    int j=0;
    int arrk[3];
    cin>>n;
    while(n--){
        int sum=0;
    for(int i=0;i<3;i++){
        cin>>arrk[i];
        sum=sum+arrk[i];
    }if(sum>=2){
        j++;
    }
    }
    cout<<j<<endl;
    return 0;
}