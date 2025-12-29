#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    int k=st.length();
    char arr1[]={'A','H','I','M','O','T','U','V','W','X','Y'};
    int j=0;
    char arr[(k+1)/2];
    for(int i=0;i<(k+1)/2;i++){
        if(st[i]==st[k-i-1]){
            arr[j]=st[i];
            j++;
        }
    }
    int m=0;
    for(int i=0;i<j;i++){
        for(int t=0;t<11;t++){
            if(arr[i]==arr1[t]){
                m++;
            }
        }
    }
    for(int i=0;i<11;i++){
        if(arr[(k+1)/2]==arr[i]){
            m++;
        }
    }
    if(m==k/2+1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}