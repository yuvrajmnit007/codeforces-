#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<t;i++){
        if(arr[i]==1){
            a++;
        }else if(arr[i]==2){
            b++;
        }else{
            c++;
        }
    }
    int max;
    if(a>=b&&a>=c){
        max=a;
    }else if(b>=a&&b>=c){
        max=b;
    }else{
        max=c;
    }
    cout<<t-max<<endl;
    return 0;

}