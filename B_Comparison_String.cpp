#include<bits/stdc++.h>
using namespace std;
main() {
    int n;
    cin >> n;
    while (n--) {
        int p;
        string st;
        cin >> p >> st;
        int ans=INT_MIN;
        int count=1;
        int i=1;
        while(i<p){
            if(st[i]==st[i-1]){
                count++;
            }else{
                ans=max(ans,count);
                count=1;
            }
            i++;
        }
        ans=max(count,ans);
        cout<<ans+1<<endl;
    }

    return 0;
}
