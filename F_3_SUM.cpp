#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
      while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=arr[i]%10;
        }
        bool found = false;
        int arr1[10] = {0};
        vector<int> vals;
        for(int i=0;i<n;i++){
            if(arr1[arr[i]]<3){
                arr1[arr[i]]++;
                vals.push_back(arr[i]);
            }
        }
        int sum=0;
        for(int i=0;i<vals.size();i++){
            for(int j=i+1;j<vals.size();j++){
                for(int k=j+1;k<vals.size();k++){
                    sum = (vals[i]+vals[j]+vals[k])%10;
                    if(sum==3){
                        found = true;
                        break;
                    }
                }
            }
        }
        cout<<(found ? "YES\n" : "NO\n");
      }
      return 0;
}