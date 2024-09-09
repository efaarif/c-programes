#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;
    int max, min;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be positive.\n");
        return 1; // Exit with an error code
    }

    int array[n]; // Declare an array of size n

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize max and min with the first element
    max = min = array[0];

    // Calculate sum, average, max, and min
    for (i = 0; i < n; i++) {
        sum += array[i];

        if (array[i] > max) {
            max = array[i]; // Update max
        }
        if (array[i] < min) {
            min = array[i]; // Update min
        }
    }

    average = sum / n; // Calculate average

    // Display results
    printf("\nSum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

