#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,h;
        cin >>n>>m>>h;
        vector<long long>a(n);
        for(int i = 0; i <n; i++){
            cin>>a[i];
            
        }
        vector<long long>help= a;
        vector<int> help2(n,-1);
        int resettime = 0;
        int time = 0;
        while(m--){
            int b;
            long long c;
            cin >> b >> c;
            b--;
            time++;
            if(help2[b]<resettime){
                a[b]=help[b];
            }
            if(a[b]+c>h){
                resettime=time;
            } else {
                a[b]+= c;
                help2[b]=time;
            }
        }
        for(int i = 0; i < n; i++){
            if(help2[i]<resettime){
                a[i]=help[i];
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
