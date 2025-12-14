//sum of elements in array

#include <stdio.h>

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);
    return 0;
}