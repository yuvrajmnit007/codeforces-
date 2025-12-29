#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int n,i;
        n=st.size();
        int moves=0;//this will return no of moves
        int open1=0,open2=0;//open1=small brackets opening and open2=large brackets opening
        for(i=0;i<n;i++){
            if(st[i]=='('){
                open1++;
            }else if(st[i]=='['){
                open2++;
            }else if(st[i]==')'){
                if(open1>=1){
                    moves++;
                    open1--;
                }
            }else if(st[i]==']'){
                if(open2>=1){
                    moves++;
                    open2--;
                }
            }
        }
        cout<<moves<<endl;
    }
   return 0;
}