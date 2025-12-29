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
        vector<int>freq(26,0);
        int count=0;
        int ans=1;
        freq[st[0]-'a']=1;
        count=1;
        for(int i=1;i<n;i++){
            freq[st[i]-'a']++;
            if(freq[st[i]-'a']==1){
                count++;
            }
            ans+=count;
        }
        cout<<ans<<endl;
    }
    return 0;
}