#include<bits/stdc++.h>
using namespace std;
bool isallow(string allow[],string st ){
    for(int i=0;i<11;i++){
        if(st==allow[i]){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    string allowed[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int count=0;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        if(st[0]>='0' && st[0]<='9'){
            int age = stoi(st);
            if(age < 18) count++;
        }
        else if(isallow(allowed,st))count++;
    }
    cout<<count<<endl;
    return 0;
}