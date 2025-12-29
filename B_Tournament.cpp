#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, l, k;
        cin >> n >> l >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int p = arr[l - 1];
        sort(arr, arr + n);
        int j = 0;
        for(int i = n - 1; i >= 1; i--){
            if(arr[i] == arr[i - 1] && arr[i] >= p){
                j++;
            }
        }
        int x = n - k - j;
        if(x < 0){
            cout << "NO" << endl;
        }
        else if(arr[x] <= p){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
