//Copy elements from one array to another

#include <stdio.h>

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int n = sizeof(source) / sizeof(source[0]); // Calculate size
    int destination[n]; // Destination array must be large enough

    // Copy elements using a for loop
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    // Print the destination array to verify
    printf("Destination array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
