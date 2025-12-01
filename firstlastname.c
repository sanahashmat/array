#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100];  // Enough space to store first + last + space

    // Read first name
    printf("Enter your first name: ");
    scanf("%s", firstName);

    // Read last name
    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Copy first name into fullName
    strcpy(fullName, firstName);

    // Add a space between first and last name
    strcat(fullName, " ");

    // Append last name
    strcat(fullName, lastName);

    // Display full name
    printf("Full Name: %s\n", fullName);

    return 0;
}
