#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>arr(t);
    vector<int>arr1(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr.begin(),arr.end());
    int l=0;
    int r=0;
    int count=0;
    int i=0;
    bool ans=true;
    while(i<t){
        while(arr[i]!=arr1[i]&&ans){
            if(l==0&&count==0){
                l=i+1;
            }else{
                ans=false;
            }
            r=i+1;
            i++;
        }
        if(arr[i]!=arr1[i]&&!ans){
            cout<<"no"<<endl;
            return 0;
        }
        i++;
    }
    if(l==1&&r==)
    cout<<"yes"<<endl;
    cout<<l<<" "<<r<<endl;
    return 0;
}