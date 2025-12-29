#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    int arr1[n*k];
    for(int i=0;i<n*k;i++){
        arr1[i]=i+1;
    }
    int index = 0;
    int arr2[(n-1)*k];
        for (int i = 0; i < n * k; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            arr2[index++] = arr1[i];
        }
    }
    int m=0;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
        for(int j=0;j<n-1;j++){
            cout<<arr2[m]<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}