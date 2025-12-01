#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sub[] = {3, 4, 5};
    int n = 6; //sizeof(arr) / sizeof(arr[0]);
    int m = 3; //sizeof(sub) / sizeof(sub[0]);
    int i,j,found = 0;

    // Loop through main array
    for (int i = 0; i <= n - m; i++) { // Only go up to n - m
        for (j = 0; j < m; j++) {
            if (arr[i + j] != sub[j]) {
                break; // Mismatch, break inner loop
            }
        }
        if (j == m) { // Found all elements of subarray
            found = 1;
            printf("Subarray found at index %d\n", i);
            break; // Stop after first occurrence
        }
    }

    if (!found) {
        printf("Subarray not found\n");
    }

    return 0;
}
