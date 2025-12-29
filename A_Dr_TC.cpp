#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int j=0;
        string str;
        cin>>str;
        for(int i=0;i<k;i++){
            if(str[i]=='1'){
                j++;
            }
        } 
        int l = 0;
        for(int i=0;i<k;i++){
            if(str[i]=='1'){
                l=l+j-1;
            }
            if(str[i]=='0'){
                l=l+j+1;
            }
        } 
        cout<<l<<endl;
    }
    return 0;
}