#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    if(n%4!=0){
        cout<<"==="<<endl;
    }else{
        int a=0,g=0,c=0,t=0;
        for(int i=0;i<n;i++){
            if(st[i]=='A'){
                a++;
            }
            if(st[i]=='G'){
                g++;
            }
            if(st[i]=='C'){
                c++;
            }
            if(st[i]=='T'){
                t++;
            }
        }
        int p[4]={a,g,t,c};
        sort(p,p+4);
        int max=p[3];
        int A,B,C,D;
        A=n/4-a;
        B=n/4-g;
        C=n/4-t;
        D=n/4-c;
        if(n/4<max){
            cout<<"==="<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(st[i]=='?' && A >0){
                    cout<<"A";
                    A--;
                }
                else if(st[i]=='?' && B >0){
                    cout<<"G";
                    B--;
                }
                else if(st[i]=='?' && C >0){
                    cout<<"T";
                    C--;
                }
                else if(st[i]=='?' && D >0){
                    cout<<"C";
                    D--;
                }else{
                    cout<<st[i];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}