#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers by taking the absolute value
    if (number < 0) {
        number = -number;
    }

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Display the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
