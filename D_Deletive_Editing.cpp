#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        vector<int>freq(26,0);
        for(int i=0;i<t.size();i++){
            freq[t[i]-'A']++;
        }
        for(int j=s.size()-1;j>=0;j--){
            if(freq[s[j]-'A']>0){
                freq[s[j]-'A']--;
            }
            else{
                s[j]='#';
            }
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                res+=s[i];
            }
        }
        if(res==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}