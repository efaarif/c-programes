#include <stdio.h>

int main() {
    float num1, num2;
    int operation;
    float result; 
    
    printf("Enter two numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);


    printf("Simple Calculator\n");
    printf("Select an operation:\n");
    printf(" +  : Addition\n");
    printf(" -  : Subtraction\n");
    printf(" *  : Multiplication\n");
    printf(" /  : Division\n");
    printf("Enter your choice: ");
    scanf(" %d", &operation);

    

    switch (operation) {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

