#include<iostream>
#include<vector>
using namespace std;
int main(){
    int area;
    cin>>area;
    vector <int> per;
    int j=0;
    for(int i=1;i*i<=area;i++){
        if(area%i==0){
            per.push_back(2*(i+(area/i)));
            j++;
        }
    }
    int min =per.at(0);
    for(int i=0;i<per.size();i++){
        if(per[i]<min){
            min=per.at(i);
        }
    }
    cout<<min<<endl;
    return 0;
}