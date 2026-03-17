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
        if(s.size()==1){
            cout<<s<<endl;
            continue;
        }
        vector<int>help(10,0);
        int sum=0;
        for(int i=0;i<s.size();i++){
            int r=s[i]-'0';
            help[r]++;
            sum+=r;
        }
        for(int i=1;i<=9*1e5;i++){
            string ans="";
            ans+=to_string(i);
            int x=i;
            while(x>9){
                int temp=x;
                int sum=0;
                while(temp>0){
                    sum+=temp%10;
                    temp/=10;
                }
                ans+=to_string(sum);
                x=sum;
            }
            vector<int>help1(10,0);
            int sum1=0;
            bool flag=true;
            for(int i=0;i<ans.size();i++){
                int r1=ans[i]-'0';
                sum1+=r1;
                help1[r1]++;
                if(help1[r1]>help[r1])flag=false;
            }
            if(!flag)continue;
            int rem=sum-sum1;
            if(rem==i){
                string ans1="";
                for(int j=9;j>=0;j--){
                    for(int k=0;k<help[j]-help1[j];k++){
                        ans1+=to_string(j);
                    }
                }
                ans1+=ans;
                cout<<ans1<<endl;
                break;
            }
        }
    }
    return 0;
}