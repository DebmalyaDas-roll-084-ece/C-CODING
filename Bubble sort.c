#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; // Number of elements
    int i, j, temp;

    // Outer loop to control the number of passes
    for (i = 0; i < n - 1; i++) {
        
        // Inner loop to compare adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            
            // If the current element is bigger than the next, swap them
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
