#include <stdio.h>

int main() {
    float num1, num2, num3;


    printf("Enter three numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);
    printf("Number 3: ");
    scanf("%f", &num3);

    
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %.2f\n", num2);
    } else {
        printf("The largest number is: %.2f\n", num3);
    }

    return 0;
}

