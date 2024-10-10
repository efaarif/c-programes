#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number of elements must be positive.\n");
        return 1; 
    }

    int array[n]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = min = array[0];
    
    for (i = 0; i < n; i++) {
        sum += array[i];

        if (array[i] > max) {
            max = array[i]; 
        }
        if (array[i] < min) {
            min = array[i]; 
        }
    }

    average = sum / n; 

    printf("\nSum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

