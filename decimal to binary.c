#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32]; 
    int index = 0;

    while (n > 0) {
        binary[index] = n % 2; 
        n = n / 2;              
        index++;
    }

    printf("Binary: ");
    int i; 
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);

    return 0;
}

