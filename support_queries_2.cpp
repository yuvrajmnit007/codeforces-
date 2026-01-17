#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        string st;
        cin>>n>>st;
        unordered_map<int,int>help;
        if(n==1){
            help[st-'0']++;
        }else if(n==2){
            help[st-'0']--;
        }else if(n==3){
            int mn=INT_MAX;
            for(auto it:help){
                mn
            }
        }
    }
    return 0;
}
