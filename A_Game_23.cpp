#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b%a==0){
        int j=b/a;
        int m=0;
        for(int i=0;i<b/a;i++){
            if(j%3==0){
                j=j/3;
                if(j>=1){
                    m++;
                }else{
                    break;
                }
            }else if(j%2==0){
                j=j/2;
                if(j>=1){
                    m++;
                }else{
                    break;
                }
            }
        }
        if(j==1){
            cout<<m<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        cout<<-1<<endl;
    }
    return 0;
}