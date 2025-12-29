#include<iostream>
#include<vector>
using namespace std;
int main(){
    string st;
    cin>>st;
    int k=st.length();
    int j=0;
    int t=0;
    int p=0;
    vector <int> arr;
    for(int i=0;i<k-1;i++){
        if(st[i]!=st[i+1]){
            j++;
            if(t!=0){
               arr[p]=t+1;
               t=0;
               p++;
            }
        }else if(st[i]==st[i+1]){
            t++;
            if(j!=0){
               arr[p]=j+1;
               j=0;
               p++;
            }
        }
    }
    int sum=0;
    for(int i=0;i<p;i++){
        sum=sum+(arr[p]+4)/5;
    }
    cout<<sum<<endl;
    return 0;
}