#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary number
    int binary[32]; // Assuming 32 bits for the binary representation
    int index = 0;

    // Edge case for zero
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[index] = n % 2; // Store remainder (binary digit)
        n = n / 2;              // Divide by 2
        index++;
    }

    // Print binary representation in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert and display the binary representation
    decimalToBinary(decimalNumber);

    return 0;
}
