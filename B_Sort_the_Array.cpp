#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    int p,q;
    q=j;
    p=j;
    int mx=arr[j];
    while(j>0){
        if(arr[j-1]>mx){
            p=j;
            while(arr[p-1]>arr[p]&&p>0){
                p--;
            }
            break;
        }else{
            mx=arr[j-1];
            j--;
            q=j;
            p=q;
        }
    }
    vector<int>help;
    for(int i=p;i<=q;i++){
        help.push_back(arr[i]);
    }
    reverse(help.begin(),help.end());
    for(int i=p;i<=q;i++){
        arr[i]=help[i-p];
    }
    if(is_sorted(arr.begin(),arr.end())){
        cout<<"yes"<<endl;
        cout<<p+1<<" "<<q+1<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}