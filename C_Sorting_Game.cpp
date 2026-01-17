#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n; 
        cin>>n;
        string st;
        cin>>st;
        string s=st;
        sort(s.begin(),s.end());
        if(s==st){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
            int count=0;
            for(int i=0;i<n;i++){
                if(st[i]=='0'){
                    count++;
                }
            }
            vector<int>help;
            for(int i=0;i<count;i++){
                if(st[i]=='1'){
                    help.push_back(i+1);
                }
            }
            for(int i=count;i<n;i++){
                if(st[i]=='0'){
                    help.push_back(i+1);
                }
            }
            cout<<help.size()<<endl;
            for(auto it:help){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}