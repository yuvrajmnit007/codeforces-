#include<iostream>
using namespace std;
int main(){
    char ch[2];
    cin>>ch[0]>>ch[1];
    int n;
    cin>>n;
    int k=n%4;
    int arr[]={60,94,62,118};
    if(k==2 || k==0){
        cout<<"undefined"<<endl;
    }else{
        int p[2];
        p[0]=int(ch[0]);
        p[1]=int(ch[1]);
    }
}