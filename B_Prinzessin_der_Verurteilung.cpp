#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string st;
        cin>>st;
        string mex="";
        for(char s='a';s<='z';s++){
            bool flag=false;
            for(auto it:st){
                if(it==s){
                    flag=true;
                    break;
                }
            }
            if(!flag){
                mex=s;
                break;
            }
        }
        if(mex!=""){
            cout<<mex<<endl;
            continue;
        }
        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                string s="";
                s+=i;
                s+=j;
                bool flag=false;
                for(int p=1;p<n;p++){
                    string it="";
                    it+=st[p-1];
                    it+=st[p];
                    if(it==s){
                        flag=true;
                        break;
                    }
                }
                if(mex==""&&!flag){
                    mex=s;
                    break;
                }
            }
        }
        if(mex!=""){
            cout<<mex<<endl;
            continue;
        }
        for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                for(char k='a';k<='z';k++){
                    string s="";
                    s+=i;
                    s+=j;
                    s+=k;
                    bool flag=false;
                    for(int p=2;p<n;p++){
                        string it="";
                        it+=st[p-2];
                        it+=st[p-1];
                        it+=st[p];
                        if(it==s){
                            flag=true;
                            break;
                        }
                    }
                    if(mex==""&&!flag){
                        mex=s;
                        break;
                    }
                }
            }
        }
        cout<<mex<<endl;
    }
    return 0;
}