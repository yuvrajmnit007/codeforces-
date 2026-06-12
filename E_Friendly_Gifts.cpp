#include <bits/stdc++.h>
using namespace std;
#define int long long
void update(vector<int>& fen,int idx,int val,int n){
    while(idx<=n){
        fen[idx]+=val;
        idx+=idx&-idx;
    }
}
int kth(vector<int>& fen,int k,int n,int LOG){
    int pos=0;
    for(int pw=LOG;pw>=0;pw--){
        int np=pos+(1LL<<pw);
        if(np<=n && fen[np]<k){
            pos=np;
            k-=fen[np];
        }
    }
    return pos+1;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        int LOG=0;
        while((1LL<<(LOG+1))<=n) LOG++;

        int ans=0;

        for(int len=1;2*len<=n;len++){

            vector<int> cnt(n+2,0);
            vector<int> fen(n+2,0);

            int bad=0;

            map<int,pair<int,int>> mp;

            for(int i=1;i<=n;i++){

                cnt[arr[i]]++;

                if(cnt[arr[i]]==1){
                    update(fen,arr[i],1,n);
                }
                else if(cnt[arr[i]]==2){
                    bad++;
                }

                if(i>=len){

                    int st=i-len+1;

                    if(bad==0){

                        int mn=kth(fen,1,n,LOG);
                        int mx=kth(fen,len,n,LOG);

                        if(mx-mn==len-1){

                            if(mp.find(mn)==mp.end()){
                                mp[mn]={st,st};
                            }
                            else{
                                mp[mn].first=min(mp[mn].first,st);
                                mp[mn].second=max(mp[mn].second,st);
                            }
                        }
                    }

                    cnt[arr[st]]--;

                    if(cnt[arr[st]]==1){
                        bad--;
                    }
                    else if(cnt[arr[st]]==0){
                        update(fen,arr[st],-1,n);
                    }
                }
            }

            for(auto it=mp.begin();it!=mp.end();it++){

                int x=it->first;

                if(mp.find(x+len)==mp.end()) continue;

                int l1=it->second.first;
                int r1=it->second.second;

                int l2=mp[x+len].first;
                int r2=mp[x+len].second;

                if(l1+len<=r2 || l2+len<=r1){
                    ans=max(ans,len);
                }
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}