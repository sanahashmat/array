//find avg of an array

#include <stdio.h>

int main() {
    // Declare and initialize an integer array
    int array[] = {10, 20, 30, 40, 50};
    // Calculate the number of elements in the array
    int n = sizeof(array) / sizeof(array[0]); 
    int sum = 0;
    // Use float to store the average for precision
    float average; 

    // Loop through the array to calculate the sum
    for (int i = 0; i < n; i++) {
        sum += array[i]; // Add each element to the sum
    }

    // Calculate the average by dividing the total sum by the number of elements
    // Type-cast sum to float to ensure floating-point division
    average = (float)sum / n; 

    // Print the sum and average
    printf("The sum of the array elements is: %d\n", sum);
    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
