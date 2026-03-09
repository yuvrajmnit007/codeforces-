#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        string st;
        cin>>st;
        stack<char>s;
        int count=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='('){
                s.push('(');
            }else{
                if(s.empty())count++;
                else s.pop();
            }
        }
        while(!s.empty()){
            s.pop();
            count++;
        }
        cout<<st.size()-count<<endl;
    }
    return 0;
}