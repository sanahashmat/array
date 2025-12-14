//Count positive, negative, even, odd numbers in an array 

#include <stdio.h>

int main() {
    int arr[] = {2, -1, 5, 6, 0, -3, 10, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0;
    int negative_count = 0;
    int even_count = 0;
    int odd_count = 0;
    int i;

    // Iterate through each element in the array
    for (i = 0; i < size; i++) {
        // Check for positive/negative/zero
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        }
        // else the number is zero, which is neither positive nor negative

        // Check for even/odd
        // Use modulus operator to check for remainder when divided by 2
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Print the counts
    printf("Total numbers in the array: %d\n", size);
    printf("Positive numbers count: %d\n", positive_count);
    printf("Negative numbers count: %d\n", negative_count);
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);

    return 0;
}
