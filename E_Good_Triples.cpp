#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int arr[10]={0};
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    if(i+j+k<=9){
                        arr[i+j+k]++;
                    }
                }
            }
        }
        long long rand=1;
        for(int i=0;i<st.size();i++){
            rand*=arr[st[i]-'0'];
        }
        cout<<rand<<endl;
    }
    return 0;
}