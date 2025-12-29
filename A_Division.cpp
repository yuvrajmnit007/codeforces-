#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int rating;
        cin>>rating;
        if(rating>=1900){
            cout<<"Division 1"<<endl;
        }
        if(1899>=rating && rating>=1600){
            cout<<"Division 2"<<endl;
        }
        if(1599>=rating && rating>=1400){
            cout<<"Division 3"<<endl;
        }
        if(rating<=1399){
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}