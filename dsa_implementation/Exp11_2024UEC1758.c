#include <stdio.h>
// LINEAR SEARCH (using loop)
int linearSearch(int arr[], int n, int target) {
    int i;
    for(i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;// it will return index if the element is found;
    }
    return -1;
}
// LINEAR SEARCH (Recursive)
int linearSearchRecursive(int arr[], int n, int target, int i) {
    if (i == n)//if i=n it means the array does not have the target value
        return -1;
    if (arr[i] == target)
        return i;// it will return index if the element is found
    return linearSearchRecursive(arr, n, target, i + 1);//it will increase the value of index by one and call back the function
}
// BINARY SEARCH (using loop)
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high-low)/2;// it will find the mid value of low and high and it is implemented in such a way to overcome with the integer overflow problem
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;// binary search is can only be used on shortde array thats whay it is making sense that if mid value is less than not possible to lie on left side of it
        else
            high = mid - 1;//same logic which is used in upper case that if mid is more than it will lie in left side
    }
    return -1;
}
// BINARY SEARCH (Recursive)
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = low + (high-low)/2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);// loop is replaced by recursive call 
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}
// MAIN FUNCTION
int main() {
    int n, target, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    int i;
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);// taking input in array but bs is only possible for sorted array so if we want to use that algorithm than we have to give input in sorted array 
        }
    printf("Enter element to search: ");
    scanf("%d", &target);

    printf("==== CHOOSE ALGORITHM TO USE ====\n");
    printf("1. Linear Search (using loop)\n");
    printf("2. Linear Search (Recursive)\n");
    printf("3. Binary Search (using loop)\n");
    printf("4. Binary Search (Recursive)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int result = -1;
    if(choice==1){
                  result = linearSearch(arr, n, target);
                  }
    if(choice==2){
                   result = linearSearchRecursive(arr, n, target, 0);
                  }
    if(choice==3){
                  result = binarySearch(arr, n, target);
                  }
    if(choice==4){
                  result=binarySearchRecursive(arr, 0, n-1, target);
                  }
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}
