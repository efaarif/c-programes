#include <stdio.h>

int main() {
    int n, i;
    int largest;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int array[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Initialize largest with the first element of the array
    largest = array[0];

    // Find the largest element
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Display the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
