#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector<int> arr(t);
        for(int i = 0; i < t; i++){
            cin >> arr[i];
        }

        vector<int> arr1;
        int k = 0;

        for(int i = 0; i < t; i++){
            if(arr[i] == 0){
                k++;
            } else if(arr[i] == 1){
                arr1.push_back(k);
                k = 0;
            }
        }
        if(arr[t-1] != 1){
            arr1.push_back(k);
        }

        if(arr1.empty()){
            cout << k << endl;
        } else {
            int max = arr1[0];
            for(int i = 1; i < arr1.size(); i++){
                if(arr1[i] > max){
                    max = arr1[i];
                }
            }
            cout << max << endl;
        }
    }
    return 0;
}
