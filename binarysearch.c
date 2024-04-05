#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

       
        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;

       
        else
            right = mid - 1;
    }

    
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int index = binarySearch(arr, 0, n - 1, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
