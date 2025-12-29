#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    cin>>m;
    vector<int>usb_only,ps_only;
    for(int i=0;i<m;i++){
        int v;
        string st;
        cin>>v;
        cin>>st;
        if(st=="USB"){
            usb_only.push_back(v);
        }else{
            ps_only.push_back(v);
        }
    }
    int help=a+b+c;
    sort(usb_only.begin(),usb_only.end());
    sort(ps_only.begin(),ps_only.end());
    int ans=0;
    int l=0;
    vector<int>rem;
    while(a>0&&l<usb_only.size()){
        ans+=usb_only[l];
        l++;
        a--;
    }
    while(l<usb_only.size()){
        rem.push_back(usb_only[l]);
        l++;
    }
    l=0;
    while(b>0&&l<ps_only.size()){
        ans+=ps_only[l];
        l++;
        b--;
    }
    while(l<ps_only.size()){
        rem.push_back(ps_only[l]);
        l++;
    }
    sort(rem.begin(),rem.end());
    l=0;
    while(c>0&&l<rem.size()){
        ans+=rem[l];
        l++;
        c--;
    }
    cout<<help-(a+b+c)<<" "<<ans<<endl;
    return 0;
}