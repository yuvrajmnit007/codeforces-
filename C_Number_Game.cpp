#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int k=n;
        if(n==1){
            cout<<"FastestFinger"<<endl;
            continue;
        }
        if(n==2){
            cout<<"Ashishgup"<<endl;
            continue;
        }
        if(n%2==1&&n!=1){
            cout<<"Ashishgup"<<endl;
        }else{
            int count=0;
            while(n%2==0){
                n/=2;
                count++;
            }
            if(n==1){
                cout<<"FastestFinger"<<endl;
            }else if(count==1){
                int temp=0;
                for(int i=3;i*i<=n;i++){
                    if(n%i==0&&i%2==1){
                        temp++;
                        if(n/i!=1&&(n/i)%2==1){
                            temp++;
                            break;
                        }
                    }
                }
                if(temp>1){
                    cout<<"Ashishgup"<<endl;
                }else {
                    cout<<"FastestFinger"<<endl;
                }
            }else{
                cout<<"Ashishgup"<<endl;
            }
        }
    }
    return 0;
}