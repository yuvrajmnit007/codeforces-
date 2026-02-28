#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        string s1;
        s1=s.substr(1);
        sort(s1.begin(),s1.end());
        int ans=s[0]-'0';
        int i=0;
        int n=s.size();
        int count=0;
        while(i<s1.size()&&ans+(s1[i]-'0')<=9){
            ans+=s1[i]-'0';
            i++;
            count++;
        }
        int sum1=1;
        int j=0;
        int count1=0;
        while(j<s1.size()&&sum1+(s1[j]-'0')<=9){
            sum1+=s1[j]-'0';
            j++;
            count1++;
        }
        if(count1>count){
            cout<<n-count1<<endl;
        }
        else{
            cout<<n-count-1<<endl;
        }
    }
    return 0;
}