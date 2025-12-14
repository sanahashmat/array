//read and print elements of an array

#include <stdio.h>

int main() {
    int size, i;

    // Read the size of the array
    printf("Input the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int arr[size];

    // Read elements into the array
    printf("Input %d elements (integer type) in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("Elements in the array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
