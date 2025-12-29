#include<iostream>
#include<set>
using namespace std;
int main(){
    int m=0;
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    set<int> myset(arr,arr+4);
    cout<<4-myset.size()<<endl;
    return 0;
}
