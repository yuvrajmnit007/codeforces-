#include<bits/stdc++.h>
using namespace std ;
int main(){
    string st;
    cin>>st;
    int n=st.size();
    char ans[n];
    ans[0]=st[0];
    for(int i=1;i<n;i++){
        if(ans[i-1]==st[i]){
            for(char j='a';j<='z';j++){
                if(j!=st[i-1]){
                    if(i==n){
                        ans[i]=j;
                        break;
                    }else if(i<n && st[i+1]!=j){
                        ans[i]=j;
                        break;
                    }
                    
                }
            }
        }else{
            ans[i]=st[i];
        }
    }
    for(int i=0;i<n;i++)cout<<ans[i];
    cout<<endl;
    return 0;
}