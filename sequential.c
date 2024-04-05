#include <stdio.h>


int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
   
    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = sequentialSearch(arr, n, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
