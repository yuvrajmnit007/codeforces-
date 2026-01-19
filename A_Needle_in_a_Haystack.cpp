#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string st1,st2;
        cin>>st1>>st2;
        int n=st1.size();
        int m=st2.size();
        vector<int>freq(26,0);
        for(int i=0;i<m;i++){
            freq[st2[i]-'a']++;
        }
        bool ans=true;
        for(int i=0;i<n;i++){
            if(freq[st1[i]-'a']<=0){
                ans=false;
                break;
            }else{
                freq[st1[i]-'a']--;
            }
        }
        string s="";
        for(int i=0;i<26;i++){
            string s1="";
            for(int j=1;j<=freq[i];j++){
                s1+=char('a'+i);
            }
            s+=s1;
        }
        if(ans){
            string help="";
            int i=0,j=0;
            while(i<s.size()&&j<n){
                if(s[i]<st1[j]){
                    help+=s[i];
                    i++;
                }else{
                    help+=st1[j];
                    j++;

                }
            }
            if(i==s.size()){
                while(j<n){
                    help+=st1[j];
                    j++;
                }
            }else{
                while(i<s.size()){
                    help+=s[i];
                    i++;
                }
            }
            cout<<help<<endl;
        }else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}