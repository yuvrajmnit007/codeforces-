#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    stack<char>s;
    for(int i=0;i<st.size();i++){
        if(st[i]=='{'||st[i]=='['||st[i]=='('){
            s.push(st[i]);
        }else if(st[i]=='}'&&!s.empty()&&s.top()=='{'){
            s.pop();
        }else if(st[i]==']'&&!s.empty()&&s.top()=='['){
            s.pop();
        }else if(st[i]==')'&&!s.empty()&&s.top()=='('){
            s.pop();
        }else{
            cout<<"false"<<endl;
            return 0;
        }
    }
    if(s.empty())cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}