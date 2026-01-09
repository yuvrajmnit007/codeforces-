#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    vector<int>freq(26,0);
    for(int i=0;i<st.size();i++){
        freq[st[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2!=0){
            count++;
        }
    }
    if(count%2==0&&count!=0){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
    }
    return 0;
}