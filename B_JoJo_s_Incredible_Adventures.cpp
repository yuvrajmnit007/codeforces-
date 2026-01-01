#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        st+=st;
        int help=0;
        int i=0;
        int count=0;
        int total=0;
        while(i<st.size()){
            if(st[i]=='1'){
                count++;
            }
            else{
                help=max(help,count);
                count=0;
            }
            i++;
        }
        help=max(count,help);
        if(st.size()==2){
            if(help==2){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
            continue;
        }
        if(st.size()==help){
            cout<<help*help/4<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<help;i++){
            int temp=(help-i)*(1+i);
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}