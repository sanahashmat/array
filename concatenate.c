#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[size1 + size2];

    // Copy arr1 to result
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy arr2 to result (start from size1)
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }

    // Print result
    printf("Concatenated array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    //printf("\n");

    return 0;
}
