#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        vector<int>b(26,0);
        vector<int>a(26,0);
        int count=0;
        for(int i=0;i<n;i++){
            b[st[i]-'a']++;
            if(b[st[i]-'a']==1){
                count++;
            }
        }
        int ans=0;
        int count2=0;
        for(int i=0;i<n;i++){
            a[st[i]-'a']++;
            b[st[i]-'a']--;
            if(a[st[i]-'a']==1){
                count2++;
            }
            if(b[st[i]-'a']==0){
                    count--;
            }
            ans=max(ans,count+count2);
        }
        cout<<ans<<endl;
    }

}