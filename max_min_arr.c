//Find the maximum and minimum element in an array

#include <stdio.h>

int main() {
    int arr[] = {12, 4, 65, 1, 87, 32, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int min_val, max_val;
    int i;

    // Initialize min and max with the first element of the array
    min_val = arr[0];
    max_val = arr[0];

    // Iterate through the array starting from the second element (index 1)
    for (i = 1; i < n; i++) {
        // Update minimum if the current element is smaller
        if (arr[i] < min_val) {
            min_val = arr[i];
        }

        // Update maximum if the current element is larger
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    printf("The minimum element is: %d\n", min_val);
    printf("The maximum element is: %d\n", max_val);

    return 0;
}
