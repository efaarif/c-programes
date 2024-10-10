#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
for (i = 0; i < n - 1; i++) {
        swapped = 0; 

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    int array[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }
    bubbleSort(array, n);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
