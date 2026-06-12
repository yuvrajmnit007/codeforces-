#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAXA = 500001;
int spf[MAXA];

int main(){
    for(int i=2;i<MAXA;i++) if(spf[i]==0)
        for(int j=i;j<MAXA;j+=i) if(spf[j]==0) spf[j]=i;

    int t; scanf("%d",&t);
    while(t--){
        int n; long long x;
        scanf("%d %lld",&n,&x);
        vector<int> a(n);
        for(auto &v:a) scanf("%d",&v);

        // factor x -> f_p
        unordered_map<int,int> fx;
        { long long v=x; while(v>1){ int p=spf[v],c=0; while(v%p==0){v/=p;c++;} fx[p]=c; } }

        // for each prime, collect c_i list (only positive)
        unordered_map<int, vector<int>> primeC;
        for(int v: a){
            while(v>1){
                int p=spf[v], c=0;
                while(v%p==0){v/=p;c++;}
                primeC[p].push_back(c);
            }
        }
        // include primes only in x (with f>0) -> if no a_i has it, answer 0 unless f==0 (f>0 always here)
        for(auto &pr: fx) if(!primeC.count(pr.first)){ 
            printf("0\n"); goto nextcase; 
        }

        {
        long long ans = 1;
        for(auto &pr: primeC){
            int p = pr.first;
            vector<int>& clist = pr.second;
            int f = fx.count(p)? fx[p] : 0;
            int C = *max_element(clist.begin(), clist.end());
            int D = f + C;

            // F_{<=m}(S) via DP, for m = -1..C
            // precompute for all needed m
            long long total = 0;
            vector<long long> prevF; // F_{<=m-1}
            for(int m=0; m<=C; m++){
                vector<long long> dp(D+1, 0);
                dp[0] = 1;
                for(int c : clist){
                    int cap = min(c, m);
                    vector<long long> ndp(D+1, 0);
                    for(int s=0; s<=D; s++){
                        if(!dp[s]) continue;
                        for(int j=0; j<=cap && s+j<=D; j++)
                            ndp[s+j] = (ndp[s+j] + dp[s]) % MOD;
                    }
                    dp = ndp;
                }
                long long Fm = (f+m<=D)? dp[f+m] : 0;
                long long Fprev = 0;
                if(m>0 && f+m<=D) Fprev = prevF[f+m];
                total = (total + Fm - Fprev + MOD) % MOD;
                prevF = dp;
            }
            ans = ans * total % MOD;
        }
        printf("%lld\n", ans);
        }
        nextcase:;
    }
}