#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i]; 
        }
    }
    if (second_largest == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}


