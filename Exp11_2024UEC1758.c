#include <stdio.h>

// Linear Search (using loop)
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// Linear Search (Recursive)
int linearSearchRecursive(int arr[], int n, int target, int i) {
    if (i == n)
        return -1;
    if (arr[i] == target)
        return i;
    return linearSearchRecursive(arr, n, target, i + 1);
}

// Binary Search (using loop)
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Binary Search (Recursive)
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

// Main Function
int main() {
    int n, target, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
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
    if (choice == 1)
        result = linearSearch(arr, n, target);
    if (choice == 2)
        result = linearSearchRecursive(arr, n, target, 0);
    if (choice == 3)
        result = binarySearch(arr, n, target);
    if (choice == 4)
        result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
