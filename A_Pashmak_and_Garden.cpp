#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    while (t--) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int l1=abs(x2-x1);
        int l2=abs(y2-y1);
        if(l1!=l2&&l1!=0&&l2!=0){
            cout<<-1<<endl;
        }else if(l1==0&&l2!=0){
            cout<<x1+l2<<" "<<y1<<" "<<x2+l2<<" "<<y2<<endl;
        }else if(l1!=0&&l2==0){
            cout<<x1<<" "<<y1+l1<<" "<<x2<<" "<<y2+l1<<endl;
        }else{
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
        }
    }
    return 0;
}